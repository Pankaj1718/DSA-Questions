#include<iostream>
#include<string.h>
using namespace std;

class collage
{
    string id;
    string name;
    public:
        int result;
    

    void setdata(string i,string n,int r)
    {
        id=i;
        name=n;
        result=r;
    }

    void getdata()
    {
        cout<<"The result of "<<name<<" with id "<<id<<" is "<<result<<"%"<<endl;
    }

};

int main()
{
    collage a1,a2,a3;
    cout<<"For Pankaj : "<<endl;
    a1.setdata("20GAEEE044","Pankaj",78);
    a1.getdata();
    cout<<endl;
    cout<<"For Guru : "<<endl;
    a2.setdata("21GANSD003","Guru",76);
    a2.getdata();
    return 0;

}

