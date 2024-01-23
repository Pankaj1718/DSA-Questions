#include <iostream>
using namespace std;

class bankdeposit
{
    int principle;
    int years;
    float factor;
    float returnvalue;

public:
    bankdeposit() {}
    bankdeposit(int p, int y, float f);
    bankdeposit(int p, int y, int f);
    void show(void);
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

bankdeposit::bankdeposit(int p, int y, int f)
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

void bankdeposit ::show(void)
{
    cout << " if you have " << principle << "rs in your account, then you will receive " << returnvalue << "rs after " << years << " years " << endl;
}
int main()
{
    bankdeposit bd1, bd2, bd3;
    int p, y;
    float f;
    int F;
    cout << " enter the value of p,y and f " << endl;
    cin >> p >> y >> f;
    bd1 = bankdeposit(p, y, f);
    bd1.show();
    cout << " enter the value of p,y and F " << endl;
    cin >> p >> y >> F;
    bd2 = bankdeposit(p, y, F);
    bd2.show();
    return 0;
}
