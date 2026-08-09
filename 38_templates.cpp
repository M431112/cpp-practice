#include <iostream>
using namespace std;

// A template is believed to escalate the potential of C++ several fold by giving it the ability to define data types as parameters making it useful to reduce repetitions of the same declaration of classes for different data types.
// Useful in competitive programming.
/*Why Templates?
    DRY rule.
    Generic programming.
*/

template <class T>
class vector
{
private:
    int size;

public:
    T *arr;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }

    T dotproduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

template <class T1, class T2>
class myclass
{
private:
    T1 data1;
    T2 data2;

public:
    myclass(T1 x, T2 y)
    {
        data1 = x;
        data2 = y;
    }

    void display()
    {
        cout << "Sum of both numbers: " << data1 + data2 << endl;
    }
};

template <class T6 = int, class T7 = double, class T8 = char>
class BOB
{
private:
    T6 num1;
    T7 num2;
    T8 num3;

public:
    BOB(T6 m, T7 n, T8 o)
    {
        num1 = m;
        num2 = n;
        num3 = o;
    }

    void display()
    {
        cout << "Value of first input: " << num1;
        cout << "\nValue of second input: " << num2;
        cout << "\nValue of third input: " << num3 << endl;
    }
};

int main()
{
    cout << "Using same class for different data-types!\n";
    vector<double> v1(3);
    v1.arr[0] = 4.7;
    v1.arr[1] = 1.9;
    v1.arr[2] = 2.3;

    vector<double> v2(3);
    v2.arr[0] = 5.2;
    v2.arr[1] = 0.2;
    v2.arr[2] = 3.3;

    double a = v1.dotproduct(v2);
    cout << "Decimal value: " << a << endl;

    vector<int> v3(3);
    v3.arr[0] = 4;
    v3.arr[1] = 1;
    v3.arr[2] = 2;

    vector<int> v4(3);
    v4.arr[0] = 5;
    v4.arr[1] = 0;
    v4.arr[2] = 3;

    int b = v3.dotproduct(v4);
    cout << "Integer value: " << b << endl;

    cout << "\nUsing template with multiple parameters!\n";
    int p;
    double q;
    cout << "Enter the integer value: ";
    cin >> p;
    cout << "Enter the decimal value: ";
    cin >> q;
    myclass<int, double> obj(p, q);
    obj.display();

    cout << "\nUsing template with default parameters!\n";
    BOB<> h(4, 5.998, 'R');
    h.display();

    cout << "\nWe can use datatypes of our choice!\n";
    BOB<float, char, char> g(4.67, 'G', 'W');
    g.display();

    return 0;
}