#include <iostream>
#include <cmath>
using namespace std;

class Simple
{
protected:
    double a, b;

public:
    void set_num(double value1, double value2)
    {
        a = value1;
        b = value2;
    }

    void print_num(void)
    {
        cout << "Addition of these numbers is " << (a + b) << endl;
        cout << "Substraction of these numbers is " << (a - b) << endl;
        cout << "Multiplication of these numbers is " << (a * b) << endl;
        cout << "Division of these numbers is " << (a / b) << endl;
    }
};

class Scientific
{
protected:
    double p, q;

public:
    void set_value(double value3, double value4)
    {
        p = value3;
        q = value4;
    }

    void print_val(void)
    {
        cout << "Sine of both numbers are " << sin(p) << " and " << sin(q) << endl;
        cout << "Cosine of both numbers are " << cos(p) << " and " << cos(q) << endl;
    }
};

class HybridCal : public Simple, public Scientific
{
public:
    void get_num(double a, double b)
    {
        cout << "\nSimple Calculator: " << endl;
        // Ambiguity Resolution
        Simple ::set_num(a, b);
        Simple ::print_num();
    }

    void get_value(double p, double q)
    {
        cout << "\nScientific Calculator: " << endl;
        // Ambiguity Resolution
        Scientific ::set_value(p, q);
        Scientific ::print_val();
    }
};

int main()
{

    double x, y;

    cout << "Value of number 1: ";
    cin >> x;
    cout << "Value of number 2: ";
    cin >> y;

    HybridCal smpl;
    smpl.get_num(x, y);

    HybridCal sci;
    sci.get_value(x, y);

    cout << "\nThank you!" << endl;

    return 0;
}

// Ambiguity in inheritance can be defined as when one class is derived for two or more base classes then there are chances that the base classes have functions with the same name. So it will confuse derived class to choose from similar name functions. To solve this ambiguity scope resolution operator is used “::”