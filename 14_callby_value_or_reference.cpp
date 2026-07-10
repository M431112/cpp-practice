#include<iostream>

// pass-by-value
void swap(int a , int b){
    int temp = a;
    a = b;
    b = temp;
}  //This will not swap the values

// Call by reference using pointers
void swapPointer(int* a , int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Call by refrence variable
// pass-by-refrence
void swapPointerVar(int &a , int &b){
    int temp = a;
    a = b;
    b = temp;
}


int main(){
    int x = 8, y = 2;
    std::cout<<"The value of x is "<<x <<" and the value of y is "<<y <<"\n";
    // swap(x, y);  //--> call by value method
    // swapPointer(&x ,&y);  // this will swap a and b using pointer refrence
    swapPointerVar(x, y);  // this will swap a and b using refrence variable 
    std::cout<<"The value of x is "<<x <<" and the value of y is "<<y <<"\n";
    return 0;
}

// Another example:
/*void swap(std::string &x , std::string &y){
    std::string temp;
    temp = x;
    x = y;
    y = temp;
}

int main(){
    std:: string x = "Kool-aid";
    std:: string y = "Water";

    swap(x, y);

    std::cout<<"X: "<<x<<"\n";
    std::cout<<"Y: "<<y<<"\n";

    return 0;
}*/