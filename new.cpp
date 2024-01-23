#include<iostream>
using namespace std;
class base{
    public:
        int a=15;
        int b=10;
        int c=0;
        virtual void add()
        {
            c=a+b;
        }
        void print()
        {
            cout<<"Value of a is "<<a<<endl;
            cout<<"value of b is "<<b<<endl;
            cout<<"value of c is "<<c<<endl;
        }
};

class derived:public base{
    public:
    void add()
    {
        c=a-b;
    }
};

int main()
{   
    derived d1;
    base * b1 = &d1;
    d1.add();
    d1.print();
   
    return 0;
}
