#include <iostream>
#include <list>

using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
}

int main()
{
    list<int> list1; // empty list with zero length

    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(526);
    list1.push_back(76);
    list1.push_back(9);
    display(list1);

    cout << "\nSorted list1:\n";
    list1.sort();
    display(list1);

    cout << "\nUpdated list1(remove()):\n";
    list1.remove(7);
    display(list1);

    cout << "\nUpdated list1(pop_front()):\n";
    list1.pop_front();
    display(list1);

    cout << "\n\nList 2:\n";
    list<int> list2(3); // empty list of lenght 3
    list<int>::iterator it = list2.begin();
    *it = 23;
    it++;
    *it = 45;
    it++;
    *it = 67;
    it++;
    display(list2);

    cout << "\nUpdated list2(reverse()):\n";
    list2.reverse();
    display(list2);

    cout << "\nUpdated list2(swap());\n";
    list2.swap(list1);
    display(list2);

    cout << "\nMerged list:\n";
    list2.merge(list1);
    display(list2);

    return 0;
}