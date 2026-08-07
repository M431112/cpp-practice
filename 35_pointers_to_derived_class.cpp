#include<iostream>
using namespace std;

// Virtual function enables runtime polymorphism (also known as dynamic dispatch or late binding), which ensures that the correct function is executed based on the actual object being pointed to.

class BaseClass{
    public:
        int var_base;
        virtual void display(){
            cout<<"Displaying the base class!"<<endl;
            cout<<"Variable in base class is "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
        int var_derived;
        void display(){
            cout<<"Displaying the derived class! "<<endl;
            cout<<"Variable in derived class is "<<var_derived<<endl;
        }
};

int main(){
    
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; // Pointing base class pointer to derived class

    base_class_pointer->var_base = 45;
    base_class_pointer->display();

    DerivedClass * derived_class_pointer;
    derived_class_pointer = &obj_derived;

    cout<<endl;
    derived_class_pointer->var_derived = 90;
    derived_class_pointer->display();    
    
    return 0;
}