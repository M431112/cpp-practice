#include<iostream>

using namespace std;

int muly();

int main(){
    int num1,num2;

    cout<<"Enter the value of num1: \n"; /* '<<' is called Insertion operator*/
    cin>>num1; /* '>>' is called Extraction operator*/

    cout<<"Enter the value of num2: \n";
    cin>>num2;

    cout<<"The sum of numbers is "<<num1+num2;

    muly();

    return 0;
}

int muly(){
    int no_1, no_2;
    
    cout<<".\nEnter the value of no_1: \n"; 
    cin>>no_1;
    cout<<"Enter the value of no_2: \n"; 
    cin>>no_2;

    cout<<"The multiplication is "<<no_1*no_2;

    return 0;
}