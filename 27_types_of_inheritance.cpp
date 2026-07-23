#include <iostream>
using namespace std;

// Protected access modifier -
// Protected access modifiers are similar to the private access modifiers but protected access modifiers can be accessed in the derived class whereas private access modifiers cannot be accessed in the derived class.

// Types of Inheritance :-
// 1. Single inheritance is a type of inheritance in which a derived class is inherited with only one base class.
// 2. Multilevel inheritance is a type of inheritance in which one derived class is inherited from another derived class.

class Student
{
private:
    string name; // private by default and is not inheritable

protected:
    int roll_number;

public:
    void set_name(string);
    void set_roll_number(int);
    void get_name(void);
    void get_roll_number(void);
};

void Student ::set_name(string a)
{
    name = a;
}

void Student ::set_roll_number(int r)
{
    roll_number = r;
}

void Student ::get_name()
{
    cout << "\nThe name of student is " << name << "." << endl;
}

void Student ::get_roll_number()
{
    cout << "The roll number of " << name << " is " << roll_number << "." << endl;
}

class Exams : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exams ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void Exams ::get_marks(void)
{
    cout << "Marks obtained in maths: " << maths << endl;
    cout << "Marks obtained in physics: " << physics << endl;
}

class Result : public Exams
{
    float percentage;

public:
    void display_result()
    {
        get_name();
        get_roll_number();
        get_marks();
        cout << "Your result is " << (maths + physics) / 2 << "%." << endl;
    }
};

int main()
{
    string a;
    int n;
    float x, y;

    Result S1;

    cout << "Name of student: ";
    cin >> a;
    cout << "Roll number: ";
    cin >> n;
    cout << "Marks in Maths: ";
    cin >> x;
    cout << "Marks in Physics: ";
    cin >> y;

    S1.set_name(a);
    S1.set_roll_number(n);
    S1.set_marks(x, y);
    S1.display_result();

    return 0;
}