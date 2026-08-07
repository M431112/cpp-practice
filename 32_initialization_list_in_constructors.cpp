#include <iostream>
using namespace std;

/*
Syntax for Initialization list in constructor :-
constructor (argument-list) : initialization-section{
    assignment + other code
}
*/

class Test
{
    int a, b;

public:
    // Test(int i, int j) : b(j), a(i+b) //-> this will give garbage value  the data member “a” is being initialized first and the “b” is being initialized second.
    // Test(int i, int j) : a(i), b(j)
    Test(int i, int j) : a(i), b(j + a)
    {
        cout << "\nConstructor Executed!\n";
        cout << " -Value of a is " << a << ".\n";
        cout << " -Value of b is " << b << ".\n";
    }
};

int main()
{
    int* n = new int;  // allocate memory for one int
    *n = 25;           // store value at that memory address

    
    cout<<"\nUsing \"new\" and \"delete\" keywords:\n";
    cout<< "-> "<< *n <<endl;
    
    delete n;          // free the memory

    Test bob(2, 8);

    return 0;
}