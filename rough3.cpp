#include<iostream>
using namespace std;

class complex{
      int a;
      int b;
    public:
      void Setdata(int a1,int b1){
        a = a1;
        b = b1;
      }
      void SetdataBySum(complex o1,complex o2){
        a = o1.a + o2.a;
        b = o1.b + o2.b;
      }
      void Printdata(void){
         cout<<"Your complex number is "<<a<<"+"<<b<<"i"<<endl;
      }
};
int main()
{
    complex c1,c2,c3;
    c1.Setdata(1,3);
    c1.Printdata();

    c2.Setdata(2,4);
    c2.Printdata();

    c3.SetdataBySum(c1,c2);
    c3.Printdata();
    return 0;
}
