#include<iostream>
using namespace std;

// Function Overloading
// Function overloading is a process to make more than one function with the same name but different parameters, numbers, or sequence. 

int sum(int a, int b){
    return a + b;
}

int sum(int a, int b, int c){
    return a + b + c;
}

int volume(int r, int h){
    return (3.14*r*r*h);
}

int volume(int r){
    return (r*r*r);
}

int volume(int l, int b, int h){
    return (l*b*h);
}


int main(){
    cout<<"\nThe sum of 5 and 3 is "<<sum(5, 3)<<endl;
    cout<<"The sum of 4, 8 and 6 is "<<sum(4, 8, 6)<<endl;
    cout<<endl;
    cout<<"The volume of cylinder is of radius 5 and height 9 is "<<volume(5, 9)<<endl;
    cout<<"The volume of cuboid of length 5, breadth 7 and height 4 is "<<volume(5, 7, 4)<<endl;
    cout<<"The volume of cube of side 5 is "<<volume(5)<<endl<<endl;

    return 0;
}