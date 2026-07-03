#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    
    int a = 3;
    cout<<"This was the value of a "<<a<<endl;
    a = 9;
    cout<<"This is the value of a "<<a<<endl;

    // Constant in C++
    // const value cannot be changed afterwards
    const float b = 67.55;
    cout<<"Value of b was "<<b<<endl;
    // b = 56.34
    cout<<"Value of b is "<<b<<endl;

    // Manipulators in C++
    /*
    endl -- adds a new line 
    setw -- it will set the width 
    */
    int x=5, y=464, z=42321;
    cout<<"The value of x without setw is "<<x<<endl;
    cout<<"The value of y without setw is "<<y<<endl;
    cout<<"The value of z without setw is "<<z<<endl;

    cout<<"The value of x is: "<<setw(4)<<x<<endl;
    cout<<"The value of y is: "<<setw(5)<<y<<endl;
    cout<<"The value of z is: "<<setw(6)<<z<<endl;

    // Operator Precedence
    // It means which operator should be preferred 
    int u=3, v=4;
    int t = (((((u*5)+v)+67)-45)+67);  
    // For more info. go to cpprefrence.com -> operator_precedence
    cout<<"Value of t is: "<<t ;

    return 0;
}