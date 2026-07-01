#include<iostream>

/*There are two types of variables:
 - Global variable
 - Local variable*/
 
using namespace std;

int num = 78; // This is global variable

void sum(){       
    int a ;
    cout<<num;
}

int main(){
    int num = 12;
    num = 54;  // This is local variable
    sum();
    cout<<".\nThe value of num is "<<num;
    return 0;

}