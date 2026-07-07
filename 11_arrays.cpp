#include<iostream>
using namespace std;

int main(){
    // Array Example
    int marks[] = {45, 34, 67, 89};
    cout<<"1."<<marks[0]<<endl;
    cout<<"2."<<marks[1]<<endl;
    cout<<"3."<<marks[2]<<endl;
    cout<<"4."<<marks[3]<<endl;
    cout<<endl;

    int op[] = {98, 90, 43, 2, 3};
    op[2] = 56; // we can change the value of an array
    cout<<"Using for loop: "<<endl;
    for (int i = 0; i < 4; i++)
    {
        cout<<"The value of op "<<i<<" is "<<op[i]<<endl;
    }
    cout<<endl;

    // Practice question:

    cout<<"Qiuck quiz "<<endl;
    cout<<endl;
    int qq[] = {12, 89, 52, 981, 574, 9001, 8975};
    cout<<"Using while loop:"<<endl;
    int p = 0;
    while (p<7)
    {
        cout<<"The value of index "<<p<<" is "<<qq[p]<<endl;
        p++;
    }
    cout<<endl;

    int ui[] = {56, 981, 7645, 89654};
    cout<<"Using do-while loop;"<<endl;
    int o = 0;
    do
    {
        cout<<"The value of index "<<o<<" is "<<ui[o]<<endl;
        o++;
    } while (o<4);
    cout<<endl;

    // Pointers and Array:
    cout<<"Pointers and Array: "<<endl;
    int* v = marks; // will give the value of the first index of the array
    cout<<"The value of marks[0] is "<<*v<<endl;
    cout<<"The value of marks[1] is "<<*(v+1)<<endl;
    cout<<"The value of marks[2] is "<<*(v+2)<<endl;
    cout<<"The value of marks[3] is "<<*(v+3)<<endl;
    cout<<endl;
    cout<<"*(v++) will give marks[0] "<<*(v++)<<endl;
    cout<<"*(+v) will give marks[1] "<<*(+v)<<endl;
    cout<<"*(++v) will give marks[2] "<<*(++v)<<endl;
    cout<<"With this method, cannot print marks[3] or further values"<<endl;
    
    return 0;
}