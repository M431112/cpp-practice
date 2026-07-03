#include<iostream>

using namespace std;

int c = 56;

int main(){

    // ***********Built-in datatypes***********
    int a, b, c;
    cout<<"Enter the value of a: "<<endl;
    cin>>a;
    cout<<"Enter the value of b: "<<endl;
    cin>>b;
    c = a+b;
    cout<<"The sum is "<<c<<endl;
    cout<<"The global c is "<<::c<<endl;  // "::" is called scope resolution operator

    // **********Float, Double and Long double laterals**********
    float d = 56.98F;
    long double e = 56.98l;
    cout<<"\nThe size of 34.4 is "<<sizeof(34.4)<<endl; // by default decimals are considered as double
    cout<<"The size of 34.4 is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4 is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4 is "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4 is "<<sizeof(34.4L)<<endl;
    cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e<<endl;

    // **********Reference variables**********
    // Rohan Das ---> Monty ---> Das ---> Dangerous coder
    float x = 55;
    float & y = x;
    cout<<"\nValue of x is "<<x<<endl;
    cout<<"Value of y is "<<y<<endl;

    // **********Typecasting**********

    int p = 56;
    float q = 98.87;
    
    cout<<"\nThe value of p is "<<float(p)<<endl;
    cout<<"The value of p is "<<(float)p<<endl;

    cout<<"The value of q is "<<int(q)<<endl;
    cout<<"The value of q is "<<(int)q<<endl;

    int r = int(q); 

    cout<<"The expression is "<<p + q<<endl;
    cout<<"The expression is "<<p + int(q)<<endl;
    cout<<"The expression is "<<p + (int)q<<endl;


    return 0;
}