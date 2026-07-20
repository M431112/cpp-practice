#include <iostream>
using namespace std;

/*
- A constructor is a special member function with the same name as the class.
- Constructors are used to initialize the objects of its class.
- Constructors are automatically invoked whenever an object is created.
- We cannot refer to their address
*/

class Complex
{
    int a, b;

public:
    // Complex(int, int);

    // Constructor overloading(similar to function overloading)

    Complex(int x, int y){
        a = x;
        b = y;
    }

    Complex(int x){
        a = x;
        b = 0;
    }

    Complex(){
        a = 0;
        b = 0;
    }

    void printNum()
    {
        cout << "Your complex number is " << a << " + i" << b << endl;
    }
};
/* 
Complex ::Complex(void) //--> this is default constructor, it takes no parameters.
{
    a = 0;
    b = 0;
}
*/

/* Complex :: Complex(int x, int y){
        //-- This is a parameterized constructor as it takes 2 parameters.
     a = x;
     b = y;
}*/
int main()
{
    int x, y;
    cout<<"Enter the real number: ";
    cin>>x;
    cout<<"Enter the imaginary number: ";
    cin>>y;

    // Implicit call
    Complex a(x, y);
    a.printNum();

    // Explicit call
    Complex b = Complex(x, y);
    b.printNum();
    cout<<endl;

    Complex c(x);
    c.printNum();
    cout<<endl;

    // Complex d;
    // d.printNum();

    return 0;
}

// Default arguments of the constructor are those which are provided in the constructor declaration. If the values are not provided when calling the constructor the constructor uses the default arguments automatically.