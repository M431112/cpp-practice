#include <iostream>
using namespace std;

// Types of Inheritance :-
// 3. Multiple inheritances are a type of inheritance in which one derived class is inherited with more than one base class.

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class Base3
{
protected:
    int base3int;

public:
    void set_base3int(int a)
    {
        base3int = a;
    }
};

class Derived : public Base1, public Base2, public Base3
{
public:
    void show()
    {
        cout << "The value of Base1 is " << base1int << endl;
        cout << "The value of Base2 is " << base2int << endl;
        cout << "The value of Base3 is " << base3int << endl;
        cout << "The sum of these values is " << base1int + base2int + base3int << endl;
    }
};

int main()
{
    Derived bob;
    int x, y, z;

    cout << "Number 1: ";
    cin >> x;
    cout << "Number 2: ";
    cin >> y;
    cout << "Number 3: ";
    cin >> z;

    bob.set_base1int(x);
    bob.set_base2int(y);
    bob.set_base3int(z);
    bob.show();

    return 0;
}