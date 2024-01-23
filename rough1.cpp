#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream in;
    string s;
    in.open("xyz.cpp");

    while (in.eof() == 0)
    {
        getline(in, s);
        cout << s <<endl;
    }
    in.close();
    return 0;
}
