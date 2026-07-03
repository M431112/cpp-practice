// There are two types of headers files:
// 1. System header files, it comes with compiler.
#include<iostream>
// 2. User defined header files, it is written by programmer.
// #include<this.h> --> This will produce an error if "this.h" is not present in the current directory.

using namespace std;

int main(){
    int a = 4, b = 5;

    cout<<"Operators in C++ :-"<<endl;
    cout<<"Following are the types of arthematic operators in C++:"<<endl;
    // Arthematic Operators
    cout<<"The value of a + b is "<<a + b<<endl;
    cout<<"The value of a - b is "<<a - b<<endl;
    cout<<"The value of a * b is "<<a * b<<endl;
    cout<<"The value of a / b is "<<a / b<<endl;
    cout<<"The value of a % b is "<<a % b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<endl;

    // Assignment Operators --> use to assign values to variables
    /*
    int a = 6, k = 6
    char f = 'h'.......etc
    */
    
    // Comparision Operators
    cout<<"Following are the comparision operators in C++:"<<endl;
    cout<<"The value of a==b is "<<(a==b)<<endl;
    cout<<"The value of a!=b is "<<(a!=b)<<endl;
    cout<<"The value of a>=b is "<<(a>=b)<<endl;
    cout<<"The value of a<=b is "<<(a<=b)<<endl;
    cout<<"The value of a<b is "<<(a<b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;
    cout<<endl;

    // Logical Operators
    cout<<"Following are the logical operators in C++:"<<endl;
    cout<<"The value of this logical and operator ((a==b) && (a>b)) is "<<((a==b) && (a>b))<<endl;
    cout<<"The value of this logical and operator ((a==b) || (a<b)) is "<<((a==b) || (a<b))<<endl;
    cout<<"The value of this logical and operator (!(a==b)) is "<<(!(a==b))<<endl;

    
    return 0;
}