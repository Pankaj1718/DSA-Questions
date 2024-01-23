#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ofstream out;
    out.open("rough2.cpp");
    
    out << "Hello everyone..." << endl;
    out << "Myself Pankaj"<< endl;

    out.close();
    return 0;
}
