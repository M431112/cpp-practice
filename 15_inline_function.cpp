#include<iostream>
using namespace std;

// Inline Function
/*Inline functions are used to reduce the function call. When one function is being called multiply times in the program it increases the execution time, so inline function is used to reduce time and increase program efficiency. Inline functions are considered to be used when the function is small otherwise it will not perform well.*/

// inline and static funtions are not recommended to use at the same time.
/*inline*/ int product(int a, int b){
    static int c = 0;  //this execute only once.
    c = c + 1;  // next time this fuction runs, value of c will be retained.
    return a*b+c;
}

// Default Arguments
/*Default arguments are those values which are used by the function if we don’t input our value. It is recommended to write default arguments after the other arguments.*/
int moneyRecieved(int currentMoney, float factor = 1.08){
    return currentMoney*factor;
}

// Constant Arguments
/*Constant arguments are used when you don’t want your values to be changed or modified by the function.*/

// int strlen(const *p){

// }

int main(){
    int a, b ;
    cout<<"Enter the value of a and b: "<<endl;
    cin>>a>>b;
    /*
    cout<<"The product of a and b is: "<<product(a,b)<<endl;
    cout<<"The product of a and b is: "<<product(a,b)<<endl;
    */
    cout<<"The product of a and b is: "<<product(a,b)<<endl;
    cout<<"The product of a and b is: "<<product(a,b)<<endl;
    cout<<"The product of a and b is: "<<product(a,b)<<endl;
    cout<<endl;

    int money ;
    cout<<"Enter the Amount: "<<endl;
    cin>>money;
    cout<<"If you have Rs "<<money<<"/- in your account, you will get Rs "<<moneyRecieved(money)<<"/- in 1 year."<<endl;
    cout<<"For VIP: If you have Rs "<<money<<"/- in your account, you will get Rs "<<moneyRecieved(money, 1.18)<<"/- in 1 year."<<endl;
    return 0;
}