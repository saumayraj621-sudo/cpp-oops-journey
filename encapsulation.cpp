#include <iostream>
using namespace std;

class employee
{
private:
    int id;
    string name;
    float salary;

public:
    void setdata(int i, string n, float s)
    {
        id = i;
        name = n;
        salary = s;
    }

    void displaydata()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    employee e1;

    e1.setdata(101, "John Doe", 50000.0);
    e1.displaydata();

    return 0;
}
