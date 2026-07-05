#include<iostream>

using namespace std;

int age;
int main(){
    cout<<"Enter your age: "<<endl;
    cin>>age;

    // 1. Selection control structure -> if else ladder:
    if((age<18) && (age>0)){
        cout<<"You are not eligible."<<endl;
    }    
    else if(age==18){
        cout<<"You will get a kid-pass."<<endl;
    }
    else if(age<0){
        cout<<"Invalid age."<<endl;
    }
    else{
        cout<<"You can enter."<<endl;
    }
    cout<<endl;    


    // 2. Selection control structure -> switch case statement:

    cout<<"Switch case statement:"<<endl;
    switch (age)
    {
    case 18:
        cout<<"You are 18 yrs old."<<endl;
        break;

    case 22:
        cout<<"You are 22 yrs old."<<endl;
        break;
    
    default:
    cout<<"Invalid age"<<endl;
        break;
    }

    cout<<"Thank you"<<endl;
    
    return 0;

}