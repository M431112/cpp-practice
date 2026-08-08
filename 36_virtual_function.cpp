#include <iostream>
using namespace std;

class BOB
{
protected:
    string title;
    float rating;

public:
    BOB(string t, float r)
    {
        title = t;
        rating = r;
    }
    virtual void display() {}

    // The main thing to note here is that if we don’t use the “virtual” keyword with the “display” function of the base class then the “display” function of the base class will run.
};

class BOBvideo : public BOB
{
    float videolength;

public:
    BOBvideo(string t, float r, float vl) : BOB(t, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "\n------------------------------------------" << endl;
        cout << "  - Title of the video is " << title;
        cout << ".\n  - Rating is " << rating << " out of five stars.";
        cout << "\n  - Length of the video is " << videolength << " minutes." << endl;
        cout << "------------------------------------------" << endl;
    }
};

class BOBtext : public BOB
{
    int word;

public:
    BOBtext(string t, float r, int wc) : BOB(t, r)
    {
        word = wc;
    }
    void display()
    {
        cout << "\n------------------------------------------" << endl;
        cout << "  - Title of the text is " << title;
        cout << ".\n  - Rating is " << rating << " out of five stars.";
        cout << "\n  - No. of words in this text is " << word << "." << endl;
        cout << "------------------------------------------" << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int word;

    cout << "Title of the video is: ";
    cin >> title;
    cout << "Video length: ";
    cin >> vlen;
    cout << "Ratings(out of 5): ";
    cin >> rating;
    BOBvideo tutVideo(title, rating, vlen);

    cout << "\nTitle for the text is: ";
    cin >> title;
    cout << "No. of words in the text: ";
    cin >> word;
    cout << "Ratings(out of 5): ";
    cin >> rating;
    BOBtext tutText(title, rating, word);

    BOB *tut[2];
    tut[0] = &tutVideo;
    tut[1] = &tutText;

    tut[0]->display();
    tut[1]->display();

    return 0;
}