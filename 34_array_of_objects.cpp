#include <iostream>
using namespace std;

class Shop
{
private:
    string id;
    float price;
    string Name;

public:
    int count = 0;

    void setdata(string a, float b)
    {
        id = a;
        price = b;
    }

    void getdata(void)
    {
        cout << " -Code of item is " << id << "." << endl;
        cout << " -Price of item is " << price << " rupees." << endl;
    }

    void thisName(string Name)
    {
        this->Name = Name;
        // this->Name explicitly says: "use the class member, not the local parameter."
    }
    void showName()
    {
        cout << "Shop Name: " << this->Name << endl;
    }

    Shop &incremnet()
    {
        count++;
        return *this;
        // Here, *this dereferences the pointer to return the actual object (not the address), so you can keep calling more functions on the result. "Method chaining"
    }
};

int main()
{
    Shop c;
    c.thisName("Need Dairy");
    c.showName();
    // When you have many objects of the same class, and you call a member function on one of them, this tells the function "which object am I working on right now?"

    int x;
    cout << "\nTotal number of Items: ";
    cin >> x;
    int size = x;

    Shop *item = new Shop[size];
    Shop *itemTemp = item;

    string p;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the Id and price of item " << i + 1 << ": " << endl;
        cin >> p >> q;
        item->setdata(p, q);
        item++;
    }
    cout << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "\033[4mItem number: " << i + 1 << "\033[0m" << endl;
        itemTemp->getdata();
        itemTemp++;
    }

    //  cout << "\033[4mThis is underlined\033[0m" << endl;

    // The main thing to note here is that in the first “for” loop we are incrementing the value of the pointer “item” because it is pointing to the address of array of objects and when loop will run every time the function “setdata” will be called by the different object. If we don’t increment the value of the pointer “item” the each time function “setdata” will be called by the same object. Likewise in the second loop we are incrementing the pointer “itemTemp” so that the function “getdata” could be called by each object in the array.

    c.incremnet().incremnet().incremnet();
    cout<<"\nTotal shops in the area: ";
    cout << c.count << endl; // prints “3”

    return 0;
}