#include <iostream>
using namespace std;

// Inheritance is a process of inheriting attributes of the base class by a derived class.

class Employee
{
public:
    int id;
    double salary;

    // Base class :-
    Employee() {}
    Employee(int inpId)
    {
        id = inpId;
        salary = 450000.00;
    }
};

/*Note:
--> Default visibility mode is private.
--> Public Visibility Mode: Public members of the base class becomes Public members of the derived class.
--> Private Visibility Mode: Public members of the base class become private members of the derived class.
--> Private members are never inherited.
*/

// Derived class :-

class Programmer : public Employee
{
public:
    int languageCode;
    Programmer() {}
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 34;
    }
    void getdata()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee harry(1), bob(2);
    cout << "Salary of Employee 1: " << harry.salary << endl;
    cout << "Salary of Employee 2: " << bob.salary << endl;

    Programmer skillF(4);
    cout << "Programmer Id is: " << skillF.id << endl;
    cout << "Language code is: " << skillF.languageCode << endl;
    skillF.getdata();

    return 0;
}