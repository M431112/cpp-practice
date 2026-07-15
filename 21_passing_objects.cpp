#include <iostream>
using namespace std;

// Array of objects:

class vehicle
{
    string name;
    string model;
    string engine;
    string colour;
    string power;
    string top_speed;

public:
    void setType(void)
    {
        cout << "Company Name: " << endl;
        cin.ignore(); // only before the FIRST getline after a cin >>
        getline(cin, name);
        cout << "Model: " << endl;
        getline(cin, model);
        cout << "Engine: " << endl;
        getline(cin, engine);
        cout << "Power: " << endl;
        getline(cin, power);
        cout << "Top Speed: " << endl;
        getline(cin, top_speed);
        cout << "Colour: " << endl;
        cin >> colour;
        getline(cin, colour);
    }

    void getType(void)
    {
        cout << "The name of vehicle is " << name << ", model no. is " << model << ", engine type is " << engine << ", power is " << power << ", top speed is " << top_speed << ", colour and finish is " << colour << ".\n";
    }
};

// Passing objects as functions:

class complex
{
private:
    int a;
    int b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void setDatabySum(complex x1, complex x2)
    {
        a = x1.a + x2.a;
        b = x1.b + x2.b;
    }

    void printSum()
    {
        cout << "Your comlpex number is " << a << " + i" << b << endl;
    }
};

int mainNum()
{

    complex c1, c2, c3;

    c1.setData(2, 4);
    c1.printSum();

    c2.setData(3, 5);
    c2.printSum();

    c3.setDatabySum(c1, c2);
    c3.printSum();

    return 0;
}

int main()
{
    int n;
    string vehicleType;
    cout << "Type of Vehicle: ";
    cin >> vehicleType;
    cout << "Enter the details of " << vehicleType << ". " << endl;
    cout << "Total no. of " << vehicleType << ": " << endl;
    cin >> n;
    vehicle car[n];

    for (int i = 0; i < n; i++)
    {
        car[i].setType();
    }

    cout << "\n----- Vehicle Details -----\n";

    for (int i = 0; i < n; i++)
    {
        car[i].getType();
    }

    mainNum();

    return 0;
}