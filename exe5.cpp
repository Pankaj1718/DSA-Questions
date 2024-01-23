#include<iostream>
using namespace std;

class complex{
    int a,b;
    public: 
      complex (void);
      void printdata(void){
         cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
      }
};
complex :: complex (void){
    a = 3;
    b = 5;
}
int main()
{
    complex c1,c2;
    c1.printdata();
    c2.printdata();
    return 0;
}
