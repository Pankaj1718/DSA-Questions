#include <iostream>
#include <cstring>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
  virtual void display() {}
};

class CWHvideo : public CWH
{
    float videolength;

public:
    CWHvideo(string s, float r, float vl) : CWH(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "This video has the ratings out of 5 is  " << rating << endl;
        cout << "It's lenght is " << videolength <<" mins"<< endl;
    }
};

class CWHtext : public CWH
{
    float wordlength;

public:
    CWHtext(string s, float r, int wl) : CWH(s, r)
    {
        wordlength = wl;
    }

    void display()
    {
        cout << "This is an amazing text with title " << title << endl;
        cout << "This text has the ratings out of 5 is  " << rating << endl;
        cout << "It's lenght is " << wordlength <<" words" <<endl;
    }
};
int main()
{
    string title;
    float rating, videolength;
    int wordlength;

    title = "cpptutorial";
    rating = 4.89;
    videolength = 26.57;
    CWHvideo oopsvideo(title, rating, videolength);

    title = "cpptutorial";
    rating = 4.7;
    wordlength = 2856;
    CWHtext oopstext(title, rating, wordlength);
    CWH *tut[2];
    tut[0] = &oopsvideo;
    tut[1] = &oopstext;
    tut[0]->display();
    tut[1]->display();
    return 0;
}
