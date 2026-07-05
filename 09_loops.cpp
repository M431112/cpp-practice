#include<iostream>

using namespace std;

int main(){

    /* Types of loops in C++:
    1. For loop
    2. While loop
    3. Do-while loop*/

    // For loop
    // Syntax 
    /*for(initialization; condition; updation)
    {
        loop body(C++ code)
    }*/
    cout<<"Using for loop:"<<endl;
    for (int i = 1; i <= 10; i++)
    {
        cout<<i<<endl;
    }

    // Example of infinite for loop
    /*for (int i = 1; 1 <= 10; i++) 
    {  //make such a condition that is always true
        cout<<i<<endl;
    }*/

    // While loop
    // Syntax
    /*while(condition){
        C++ programme;
    }*/
    cout<<"Using while loop:"<<endl;
    int p=1;
    while(p<=10){
        cout<<p<<endl;
        p++;
    }

    // Example of infinite while loop
    /*int p=1
    while(true){
     //make such a condition that is always true
        cout<<p<<endl;
        p++
    }*/

    // Do-while loop
    // Syntax
    /*do
    {
        C++  programme;
    } while(condition); */

    cout<<"Using Do-while loop:"<<endl;
    int x=1;
    do
    {
        cout<<x<<endl;
        x++;
    } while (x<=10);
    
    // break and continue are also included

    cout<<"Multiplication table of 6 (do-while loop):"<<endl;
    int s=6, k=1;
    do
    {
        if(k==4){
            break;
        }
        cout<<s*k<<endl;
        k++;
    } while (k<=10);

    cout<<"Multiplication table of 7 (for loop):"<<endl;
    int q = 7;
    for (int z = 1; z <= 10; z++)
    {
        if(z==7){
            continue;;
        }
        cout<<q*z<<endl;
    }
    
    cout<<"Multiplication table of 8 (while loop):"<<endl;
    int j=8, l=1;
    while (l<=10)
    {
        if(l==3){
            break;
        }
        cout<<l*j<<endl;
        l++;
        
    }

    return 0;
}