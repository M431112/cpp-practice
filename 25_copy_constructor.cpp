#include <iostream>
using namespace std;

// A copy constructor is a type of constructor that creates a copy of another object.

int count = 0;

class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when constructor is called for object number " << count << endl;
    }

    // A destructor is a type of function which is called when the object is destroyed.
    ~num()
    {
        cout << "This is the time when destructor is called for object number " << count <<"."<< endl;
        count--;
    }
};

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }

    Number(int num)
    {
        a = num;
    }

    Number(const Number &obj)
    {
        cout << "Copy constructor is called!!" << endl;
        a = obj.a;
    }

    void Display()
    {
        cout << "The number of this object is: " << a << endl;
    }
};

int main()
{

    Number x, y(44), z, y2;

    x.Display();
    y.Display();
    z.Display();

    Number y1(y); // Copy Constructor invoked
    y1.Display();

    y2 = y; // Copy constructor not invoked
    y2.Display();
    // It will not invoke a copy constructor because the object “y2” is already created.

    Number y3 = y; // Copy constructor invoked
    y3.Display();

    cout << endl;

    cout << "We are inside our main function." << endl;
    cout << "Creating first object n1." << endl;
    num n1;
    {
        cout << "Entering this block." << endl;
        cout << "Creating two more objects:" << endl;
        num n2, n3;
        cout << "Exiting this block." << endl;
    }
    cout << "Back to main." << endl;

    return 0;
}