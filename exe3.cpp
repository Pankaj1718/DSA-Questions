#include <iostream>
using namespace std;
class Y;
class X
{
    int data1;

public:
    void setdata(int d)
    {
        data1 = d;
    }
    
    friend void add(X, Y);
};

class Y
{
    int data2;

public:
    void setdata(int d)
    {
        data2 = d;
    }
   
    friend void add(X, Y);
};

void add(X o1, Y o2)
{
    cout << o1.data1 + o2.data2;
}
int main()
{
    X c1;
    c1.setdata(56);
    Y c2;
    c2.setdata(78);

    add(c1, c2);
    return 0;
}
