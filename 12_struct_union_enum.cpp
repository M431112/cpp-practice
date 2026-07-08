#include<iostream>
using namespace std;


// Enum(enumeration)--
//user-defined datatype that consist if paired named-integer constant

enum planets{
    mercury, venus, earth, mars,
    jupiter, saturn, uranus , naptune
};

int system(){

    cout<<"Case of enum:"<<endl;

    planets planet = naptune;
    switch (planet)
    {
    case mercury:
        cout<<"Mercury: Closest to the Sun, smallest in the solar system.\n";
        break;
    case venus:
        cout<<"Venus: Hottest planet in the entire solar system.\n";
        break;
    case earth:
        cout<<"Earth: Only planet in the universe to support life.\n";
        break;
    case mars:
        cout<<"Mars: Known as the red-planet due to iron-rich soil.\n";
        break;
    case jupiter:
        cout<<"Jupiter: Largest gas giant in solar system, known for Great Red spot, a massive, centuries-long swirling storm.\n";
        break;
    case saturn:
        cout<<"Satrun: Have highly reflective rings made mostly of water ice and rock.\n";
        break;
    case uranus:
        cout<<"Uranus: Called an ice giant, this unique planet rotates completely on its side, a tilt likely caused by a massive ancient collision.\n";
        break;
    case naptune:
        cout<<"Naptune: The farthest planet from the Sun is an ice giant known for experiencing the fastest, most violent winds in the solar system.\n";
        break;
        
    }
    cout<<endl;
    return 0;
}

// Union--
union money
{
    int rice;
    char car;
    float dollar;
};

int unn(){
    union money m1;
    m1.rice = 44;
    cout<<"Case of Union:"<<endl;
    // m1.dollar = 98;
    // We can only use 1 variable at a time otherwise the compiler will give us a garbage value

    cout<<m1.rice<<endl;
    cout<<endl;

    return 0;
}

// Structure--
struct student
{
    string name;
    float gpa;
    bool enrolled = true;
};
typedef struct food
{ // typedef just change the name of struct as given automatically
    string fn;
    string colour;
    string mi;
} italian_food;


int main(){

    student student1;
    student1.name = "Alex";
    student1.gpa = 7.9;
    
    student student2;
    student2.name = "Peter";
    student2.gpa = 8.8;
    
    cout<<endl;
    cout<<"Case of structure:"<<endl;
    cout<<"The name of the student is "<<student1.name<<endl;
    cout<<"Cgpa of student is "<<student1.gpa<<endl;
    cout<<"Student is enrolled or not(yes/no) "<<student1.enrolled<<endl;
    cout<<endl;

    cout<<"The name of the student is "<<student2.name<<endl;
    cout<<"Cgpa of "<<student2.name<<" is "<<student2.gpa<<endl;
    cout<<student2.name<<" is enrolled or not (yes/no)-"<<student2.enrolled<<endl;
    cout<<endl;

    food food1;
    food1.fn = "Tagliatelle al ragu";
    food1.colour = "Yellow and Brown";
    food1.mi = "Meat, Egg and Tomato";

    food food2;
    food2.fn = "Risotto alla Milanese";
    food2.colour = "Yellow and Saffron";
    food2.mi = "Saffron and Rice";

    food food3;
    food3.fn = "Lasagna";
    food3.colour = "Red and White";
    food3.mi = "Pasta, Meat and Cheeze";

    cout<<"The name of the Italian Dish is "<<food1.fn<<endl;
    cout<<"Its colour is "<<food1.colour<<endl;
    cout<<"Main ingridients of "<<food1.fn<<" is "<<food1.mi<<endl;
    cout<<endl;

    cout<<"The name of the Italian Dish is "<<food2.fn<<endl;
    cout<<"Its colour is "<<food2.colour<<endl;
    cout<<"Main ingridients of "<<food2.fn<<" is "<<food2.mi<<endl;
    cout<<endl;
    
    cout<<"The name of the Italian Dish is "<<food3.fn<<endl;
    cout<<"Its colour is "<<food3.colour<<endl;
    cout<<"Main ingridients of "<<food3.fn<<" is "<<food3.mi<<endl;
    cout<<endl;

    unn();
    system();

    return 0;
}