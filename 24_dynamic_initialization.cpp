#include <iostream>
using namespace std;

// The dynamic initialization of the object means that the object is initialized at the runtime.
// Dynamic initialization of the object using a constructor is beneficial when the data is of different formats.

class BankDeposit
{
    int principal;
    int year;
    float intrestRate;
    float returnValue;

public:
    BankDeposit() {};
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int r);
    void show();
};

BankDeposit ::BankDeposit(int p, int y, float r)
{
    principal = p;
    year = y;
    intrestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + intrestRate);
    }
}

BankDeposit ::BankDeposit(int p, int y, int r)
{
    principal = p;
    year = y;
    intrestRate = float(r) / 100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + intrestRate);
    }
}

void BankDeposit ::show()
{
    cout << "The principal value was " << principal
         << " rupees.Return value after " << year
         << " years is " << returnValue << " rupees." << endl;
}

int main()
{

    BankDeposit bd1, bd2;
    int p, y;
    float r;
    int R;

    cout << "Enter principal amount, time(in years) and intrest rate: " << endl;
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout << "\nEnter principal amount, time(in years) and intrest rate(percent): " << endl;
    cin >> p >> y >> R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();

    return 0;
}