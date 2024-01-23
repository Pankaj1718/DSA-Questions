#include <iostream>
using namespace std;

class bankdeposit
{
    int principle;
    float factor;
    int years;
    float returnvalue;

public:
    bankdeposit() {}
    bankdeposit(int, int, float);
    bankdeposit(int, int, int);
    void show();
};

bankdeposit ::bankdeposit(int p, int y, float f)
{
    principle = p;
    years = y;
    factor = f;
    returnvalue = principle;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + factor);
    }
}

bankdeposit ::bankdeposit(int p, int y, int f)
{
    principle = p;
    years = y;
    factor = float(f) / 100;
    returnvalue = principle;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + factor);
    }
}

void bankdeposit ::show()
{
    cout << "principle amount was " << principle << endl;
    cout << "return value after " << years << " years is " << returnvalue << endl;
}
int main()
{
    bankdeposit bd1, bd2, bd3;
    int p, y;
    float f;
    int F;
    bd1 = bankdeposit(p, y, f);
    cout << "enter the value of p, y, and f " << endl;
    cin >> p >> y >> f;
    bd1.show();
    bd2 = bankdeposit(p, y, F);
    cout << "enter the values of p,y,F" << endl;
    cin >> p >> y >> F;
    bd2.show();
    return 0;
}
