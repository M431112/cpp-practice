#include<iostream>

/*Data types in C++ is catagorised in three types:
  - Built-in (int, float, char, double, bool) 
  - User-defined (Struct, Union, Enum) -> see these later
  - Derived (Array, Function, Pointer) -> see these later*/
  
using namespace std;

int main(){
    int a = 5;
    int b = 4;
    float c = 5.67;
    float d = 8.45;
    char bob = 'm';
    double pi = 3.14159265359;
    bool gay = true;

    cout<<"The sum of a and b is "<<a+b<<".\nThe multiplication of c and d is "<<c*d;
    cout<<".\nThe codeword for bob is "<<bob;
    cout<<".\nThe value of pi is "<<pi<<".\nIs the reader gay? "<<gay<<".\n(1 means true, 0 means false)";

    return 0;

}
