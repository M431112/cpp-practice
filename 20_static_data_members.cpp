#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    static int count;
    // When a static data member is created, there is only a single copy of the data member which is shared between all the objects of the class.

public:
    void setData(void)
    {
        cout << "Enter the name of employee: ";
        cin >> name;
        count++;
    }

    void getData(void)
    {
        cout << "The name of employee is " << name << " and employee number is " << count << endl;
    }

    // When a static method is created, they become independent of any object and class. Static methods can only access static data members and static methods.
    static void getcount()
    {
        cout << "The value of count is " << count << endl;
    }
};

int Employee ::count;
// Static methods can only be accessed using the scope resolution operator.

int main()
{
    Employee s1;

    int e_num;

    cout << "Enter the no. of employee(s): ";
    cin >> e_num;

    for (int i = 1; i <= e_num; i++)
    {
        s1.setData();
        s1.getData();
    }
    // Employee::getcount();
    return 0;
}