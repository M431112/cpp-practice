#include <iostream>
#include <map>
#include <string>

using namespace std;

// Map stores a key of some data type and its corresponding values of some data type.

int main()
{
    // Map is an associative array
    map<string, int> marksMap;
    cout << "Marks of students:-\n";
    marksMap["Bob"] = 97;
    marksMap["George"] = 23;
    marksMap["Han"] = 74;
    marksMap["Jake"] = 58;
    marksMap["Peter"] = 45;

    map<string, int>::iterator iter;

    marksMap.insert({{"Rohan", 86}, {"William", 89}});
    // More methods on cppreference!

    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << ": " << (*iter).second << "\n";
    }

    return 0;
}