#include<iostream>
using namespace std;

// Example of Recursive function:
int factorial(int n){
    if (n<=1)
    {
        return 1;
    }
    return n*(n-1);
// n! = n*(n-1)
// 0! and 1! = 1
}

int fib(int m){
    if (m<=2)
    {
        return 1;
    }
    return fib(m-2) + fib(m-1);
/* this is happening in fib() 
fib(5)
fib(3)+fib(4)  
fib(1)+fib(2)+fib(2)+fib(3)  
1+1+1+fib(1)+fib(2)
1+1+1+1+1 = "5" */
}

int main(){
    int a;
    cout<<"Enter the number: "<<endl;
    cin>>a;
    // cout<<"The factorial of "<<a<<" is "<<factorial(a)<<endl;
    cout<<"The term in fibonacci sequence at position "<<a<<" is "<<fib(a)<<endl;
    return 0;
}