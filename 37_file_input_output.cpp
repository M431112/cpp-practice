#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/*
In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:
   - Using the constructor.
   - Using the member function open() of the class.
*/

int main2()
{

    ofstream outFile;

    // Openinig a file using a member funtion open() and writing in it.
    outFile.open("sample_2.txt");
    outFile << "Using member function open():";
    outFile << "\nHello, people!";
    outFile << "\nHow was your day?";
    outFile << "\nEverything will be alright!";
    outFile << "\nStay hard!";
    outFile.close();

    ifstream inFile;

    string t;
    inFile.open("sample_2.txt");
    // giving output the string lines by storing in st until the file reaches the end of it.
    while (getline(inFile, t))
    {
        // getline(free1, t);
        cout << t << endl;
    }
}
int main()
{
    ofstream out("sample.txt");

    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    // Opening a file using constructor and writing in it.
    out << "Using Constructor:";
    out << "\nName of the user is " << name << endl;
    out << name << " is a good person";
    out.close();
    // <object>.close() is used when reading and writing on the same file.

    // Opening file using constructor and reading it.
    ifstream in("sample.txt");
    // in>>name;  // this will only show the first word of the text.
    getline(in, name); // “getline” is used when we want to read the whole line.
    string name2;      // to get the second line.
    getline(in, name2);
    cout << name << endl
         << name2 << endl
         << endl;
    in.close();

    main2();

    return 0;
}