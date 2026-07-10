#include<iostream>
using namespace std;

// Function --> Block of reusable code
// Think functions as a house - we have three functions means we have three house which cannot interfere eachother unless we call them in the other house

// Function Prototype(also called "Function Decoration"): 
// type function-name (arguments)
// we have made a function prototype of the function “sum”, this function prototype will tell the compiler that the function “sum” is declared somewhere in the program which takes two integer parameters and returns an integer value. 
int sum(int a , int b);
// int sum(int, int ); --> this is also correct 
void g();
// void g(void); --> this is also correct bcoz void as a return type means that this function will not return anything, and this function has no parameters.
int main1(string name, int age);

int main(){
    int num1 , num2;
    // The values which are passed to the function are called actual parameters, the variables “num1” and “num2” are the actual parameters.
    cout<<"Enter the first number: "<<endl;
    cin>>num1;
    cout<<"Enter the second number: "<<endl;
    cin>>num2;
    cout<<"The sum of both numbers is: "<<sum(num1, num2);
    cout<<endl;
    g();    
    
    return 0;
}

int sum(int a, int b){
    int c = a+b;
    // The variables which are declared in the function are called a formal parameter, the variables “a” and “b” are the formal parameters.
    return c;
}

void g(){
    cout<<"\nThank you for waiting."<<endl;
}


// Another Example

/*void happybirthday(std::string name, int age);

int main(){
    std::string name = "bob";
    int age = 21;

    happybirthday(name, age);

    return 0;
}

void happybirthday(std::string name, int age){
    std::cout<<"Happy Birthday to you "<< name <<".\n";
    std::cout<<"Happy Birthday to you "<< name <<".\n";
    std::cout<<"Happy Birthday to dear "<< name <<".\n";
    std::cout<<"Happy Birthday to you. \n";
    std::cout<<"You are "<< age <<" years old!\n";
}*/