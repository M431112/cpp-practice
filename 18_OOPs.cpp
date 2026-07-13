#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    string name;
    int age;
    int salary;

public:
    int deskNumber;
    string vehicle;
    void setdata(string name1, int age1, int salary1);
    void getdata()
    {
        cout << "The name of employee is " << name << "." << endl;
        cout << "The age of employee is " << age << "." << endl;
        cout << "The salary of employee is " << salary << " per month." << endl;
        cout << "The desk number of employee is " << deskNumber << "." << endl;
        cout << "The vehicle employee use is " << vehicle << "." << endl
             << endl;
    }
};

void Employee ::setdata(string name1, int age1, int salary1)
{
    name = name1;
    age = age1;
    salary = salary1;
}

// Hw Question

class Animals
{
private:
    string name;
    int speed;

public:
    int legs, eyes, ears;
    void setdata(string name1, int speed1);
    void getdata()
    {
        cout << "The name of animal is " << name << ", the dog." << endl;
        cout << "Total legs " << name << " have is " << legs << "." << endl;
        cout << "Total eyes " << name << " have is " << eyes << "." << endl;
        cout << "Total ears " << name << " have is " << ears << "." << endl;
        cout << "The average speed of " << name << " is " << speed << " mph." << endl
             << endl;
    }
};

void Animals ::setdata(string name1, int speed1)
{
    name = name1;
    speed = speed1;
}

int mainanimal()
{

    Animals Dog;
    Dog.ears = 2;
    Dog.eyes = 2;
    Dog.legs = 4;
    Dog.setdata("Cookie", 50);
    Dog.getdata();

    return 0;
}

// Nesting of Member Functions

class binary
{
private:
    string s;

public:
    void check_bin(void);
    void read(void);
    void ones_complement(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter the binary number: ";
    cin >> s;
};

void binary ::ones_complement(void)
{

    // check_bin();

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
};

void binary ::display(void)
{
    cout << "Displaying your binary number: " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
};

void binary ::check_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format." << endl;
            exit(0);
        }
    }
};

int mainNum()
{

    binary b;
    b.read();
    b.check_bin();
    b.display();
    b.ones_complement();
    b.display();

    return 0;
}

int main()
{

    Employee bob;
    // bob.salary; --> this will give an error because this is private within the context
    bob.deskNumber = 45;
    bob.vehicle = "Porsche 911";
    bob.setdata("Bob", 21, 900000);
    bob.getdata();

    mainanimal();
    mainNum();

    return 0;
}