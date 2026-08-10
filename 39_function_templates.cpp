#include <iostream>
using namespace std;

// Functions with template:-

template <class T1, class T2>
float funcMultiply(T1 a, T2 b)
{
    float mult = a * b;
    return mult;
}

template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

// Overloading function templates:-
template <class T5>
class BOB
{
private:
    T5 data1;

public:
    BOB(T5 a)
    {
        data1 = a;
    }
    void display();
};

template <class T5>
void BOB<T5>::display()
{
    cout << "The value of the data(pirated data) is: " << data1 << endl;
}

void func(int g)
{
    cout << "I am the non-templatized func(), with the value: " << g << endl;
}

template <class T9>
void func(T9 g)
{
    cout << "I am the template func(), with the value: " << g << endl;
}

int main()
{
    cout << "Functions with template!" << endl;
    float x;
    x = funcMultiply(4, 6.93);
    cout << "The multiplication of the two numbers is: " << x << endl;

    double q = 2.8754;
    double r = 3.5682;

    cout << "\nBefore swap:" << endl;
    cout << "q = " << q << endl;
    cout << "r = " << r << endl;

    swapp(q, r);

    cout << "After swap:" << endl;
    cout << "q = " << q << endl;
    cout << "r = " << r << endl;

    cout << "\nOverloading function templates!" << endl;
    BOB<double> m(8.99);
    m.display();

    func(6.88); // Exact match takes the highest priority!

    return 0;
}