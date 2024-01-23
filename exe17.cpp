#include<iostream>
#include<fstream>
using namespace std;


int main()
{   
    //Procedure to write into the file
    ofstream out("test1.cpp");
    string s1;
    cin>>s1;
    out<<s1;
    
    //Procedure to read the file
    ifstream in("test.cpp");
    string s2;
    getline(in,s2);
    cout<<s2<<endl;  


    return 0;
}
