#include <iostream>
using namespace std;

/*
Case1:
class B: public A{
    // Order of execution of constructor -> A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};

*/

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor is called!!\n";
    }

    void print_data1(void)
    {
        cout << "Value of data1 is " << data1 << "." << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor is called!!\n";
    }

    void print_data2(void)
    {
        cout << "Value of data2 is " << data2 << "." << endl;
    }
};

// The constructors will be executed in the order in which the classes are being inherited.
class Derived : public Base2, public Base1
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor is called!!\n";
    }

    void print_derived(void)
    {
        cout << "Value of derived1 is " << derived1 << ".\n";
        cout << "Value of derived2 is " << derived2 << ".\n";
    }
};

int main()
{
    int p, q, r, s;

    cout << "Data1: ";
    cin >> p;
    cout << "Data2: ";
    cin >> q;
    cout << "Derived1: ";
    cin >> r;
    cout << "Derived2: ";
    cin >> s;
    cout << endl;

    Derived bob(p, q, r, s);

    bob.print_data1();
    bob.print_data2();
    bob.print_derived();

    return 0;
}