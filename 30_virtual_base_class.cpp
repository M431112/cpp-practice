#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    int set_number(int a)
    {
        roll_no = a;
    }

    void print_number(void)
    {
        cout << "Your roll number is " << roll_no << "." << endl;
    }
};

class Exam : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }

    void print_marks(void)
    {
        cout << "Your result is here: " << endl
             << "    - Maths: " << maths << endl
             << "    - Physics: " << physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }

    void print_score(void)
    {
        cout << "Your PT score is " << score << "." << endl;
    }
};

class Result : public Exam, public Sports
{
protected:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        cout << "\n-------Details-------" << endl;
        print_number();
        print_marks();
        print_score();
        cout << "Your total score is " << total << "." << endl;
    }
};

int main()
{
    Result bob;
    int q, x, y, z;

    cout << "Roll number: ";
    cin >> q;
    cout << "Marks obtained in Maths: ";
    cin >> x;
    cout << "Marks obtained in Physics: ";
    cin >> y;
    cout << "PT score: ";
    cin >> z;

    bob.set_number(q);
    bob.set_marks(x, y);
    bob.set_score(z);
    bob.display();

    return 0;
}