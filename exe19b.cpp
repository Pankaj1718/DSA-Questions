#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

    ifstream in;
    string st;
    in.open("rough2.cpp");

    while (in.eof() == 0)
    {
        getline(in, st);
        cout << st << endl;
    }
    in.close();
    return 0;
}
