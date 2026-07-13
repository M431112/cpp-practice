#include <iostream>
using namespace std;

class Shop
{
private:
    string itemId[10]; // Prevent adding more than 10 items to avoid array overflow.
    int itemPrice[10];
    int counter;

public:
    void initcounter(void)
    {
        counter = 0;
    }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter Id  of item " << counter + 1 << ": ";
    cin >> itemId[counter];
    cout << "Enter price: ";
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of the item with Id " << itemId[i] << " is " << itemPrice[i] << "." << endl;
    }
}

class Store
{
private:
    string itemId[10];   // string helps to write alphabets with numbers
    string itemName[10]; // Prevent adding more than 10 items to avoid array overflow.
    int price[10];
    int counter;

public:
    void counts(void)
    {
        counter = 0;
    }
    void itemId_price(void);
    void display(void);
    void total_item(void);
    void total_price(void);
};

void Store ::itemId_price(void)
{
    cout << "Enter the ID of item no " << counter + 1 << ": ";
    cin >> itemId[counter];
    cout << "Enter the item name: ";
    cin >> itemName[counter];
    cout << "Enter the price: ";
    cin >> price[counter];
    counter++;
}

void Store ::display(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of (" << itemName[i] << ")" << itemId[i] << " is Rs " << price[i] << "." << endl;
    }
}

void Store ::total_item(void)
{
    cout << "The total number of items are " << counter << "." << endl;
}

void Store ::total_price(void)
{
    int sum = 0;
    for (int i = 0; i < counter; i++)
    {
        sum = sum + price[i];
    }
    cout << "The total price is Rs " << sum << "." << endl;
}

int mainStore()
{
    int num;

    Store Gucci;
    Gucci.counts();

    cout << "\nNo. of items: ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        Gucci.itemId_price();
    }

    Gucci.display();
    Gucci.total_item();
    Gucci.total_price();

    return 0;
}

int main()
{

    Shop AKS;
    AKS.initcounter();

    int numShop;

    cout << "No. of items: ";
    cin >> numShop;

    for (int i = 1; i <= numShop; i++)
    {
        AKS.setPrice();
    }
    AKS.displayPrice();

    mainStore();

    return 0;
}