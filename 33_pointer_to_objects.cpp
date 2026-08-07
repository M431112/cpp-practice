#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imaginary;

public:
    void setdata(int a, int b)
    {
        real = a;
        imaginary = b;
    }

    void getdata(void)
    {
        cout << "Real part is " << real;
        cout << ".\nImaginary part is " << imaginary;
        cout << ".\nThe Complex Number is " << real
             << " + i" << imaginary << endl;
    }
};

int main()
{
    int x, y;
    cout << "Enter the two numbers: " << endl;
    cin >> x >> y;

    // "->" is known as Arrow Operator

    Complex *n = new Complex;
    // (*n).setdata(x, y);  // is same as: 
    n->setdata(x, y);   
    // (*n).getdata();  // is same as:
    n->getdata();

    delete n;

    return 0;
}