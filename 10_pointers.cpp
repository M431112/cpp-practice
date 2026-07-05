#include<iostream>
using namespace std;

int main(){
    // pointer --> datatype which holds the address of another datatypes

    int a=4;
    int* b=&a;
    // & --> (address of) operator

    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;

    // * --> (value at) derefrence operator
    cout<<"The value at address b is "<<*b<<endl;
    cout<<endl;
    // it gives the value of a 

    // Pointer to pointer
    int** c=&b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;

    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;

    return 0;
}