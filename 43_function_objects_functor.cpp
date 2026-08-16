#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;

// A function object is a function wrapped in a class so that it is available as an object. That is, we can then use a function as an object.

int main()
{
    int arr[] = {45, 78, 3, 5, 9, 2};

    // sort(arr, arr+5); // Last element will be untouched!
    // sort(arr, arr+4);  // Last two element will be untouched!

    // To print array in descending order we use "greater<int>()" functors
    cout << "Array in descending order:\n";
    sort(arr, arr + 6, greater<int>());

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }

    // For more function objects, visit cppreference-algorithm!
    return 0;
}