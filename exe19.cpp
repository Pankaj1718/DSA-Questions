#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ofstream out;
    out.open("rough2.cpp");
    
    out << "Panchar putram" << endl;
    out << "Kabhi na mitram"<< endl;

    out.close();
    return 0;
}
