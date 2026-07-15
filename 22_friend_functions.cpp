#include <iostream>
using namespace std;

// complex number --> a + ib

// Friend functions are those functions that have the right to access the private data members of class even though they are not defined inside the class. It is necessary to write the prototype of the friend function.

class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealcomplex(Complex, Complex);
    int sumImagcomplex(Complex, Complex);
};

class Complex
{
    int a, b;

public:
    // Individually declaring functions as friend
    friend int Calculator ::sumRealcomplex(Complex, Complex);
    friend int Calculator ::sumImagcomplex(Complex, Complex);

    // Declaring the entire calculator class as friend
    friend class Calculator;

    friend Complex sumcomplex(Complex x1, Complex x2);

    void setNum(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNum()
    {
        cout << "The complex number is " << a << " + i" << b << "." << endl;
    }
};

Complex sumcomplex(Complex x1, Complex x2)
{
    Complex x3;
    x3.setNum((x1.a + x2.a), (x1.b + x2.b));
    return x3;
}

int Calculator ::sumRealcomplex(Complex x1, Complex x2)
{
    return (x1.a + x2.a);
}

int Calculator ::sumImagcomplex(Complex x1, Complex x2)
{
    return (x1.b + x2.b);
}

int main()
{

    int p, q, r, s;

    cout << "Enter the first real number: ";
    cin >> p;
    cout << "Enter the first imaginary number: ";
    cin >> q;
    cout << "Enter the second real number: ";
    cin >> r;
    cout << "Enter the second imaginary number: ";
    cin >> s;
    cout << endl;

    Complex c1, c2, sum;
    c1.setNum(p, q);
    c1.printNum();

    c2.setNum(r, s);
    c2.printNum();

    sum = sumcomplex(c1, c2);
    sum.printNum();

    Calculator calc;
    int res = calc.sumRealcomplex(c1, c2);
    cout << "\nThe sum of real part is " << res << "." << endl;
    int resc = calc.sumImagcomplex(c1, c2);
    cout << "The sum of imaginary part is " << resc << "." << endl;

    return 0;
}