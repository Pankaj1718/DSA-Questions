#include <iostream>
using namespace std;
class complex; // forward declaration
class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumreal(complex, complex);
    int sumcom(complex, complex);
};

class complex
{
    int a;
    int b;
    friend int calculator ::sumreal(complex, complex);
    friend int calculator ::sumcom(complex, complex);

public:
    void setnumber(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    void printnumber(void)
    {
        cout << "your complex number is " << a << " + " << b << "i" << endl;
    }
};

int calculator ::sumreal(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator ::sumcom(complex o1, complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    complex o1, o2;
    o1.setnumber(6, 8);
    o2.setnumber(1, 2);

    calculator calc;
    cout << "the sum of real components is " << calc.sumreal(o1, o2) << endl;
    cout << "the sum of complex component is " << calc.sumcom(o1, o2);
    return 0;
}
