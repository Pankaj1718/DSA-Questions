#include<iostream>
using namespace std;

class complex {
   int a,b;
   public:
     void printnumber(){
        cout<<" Your number is "<<a<<" + "<<b<<"i"<<endl;
     }
     complex (int,int);
};

complex :: complex(int x,int y = 2){

    a = x;
    b = y;
}
int main()
{
    complex o1(5,6);
    o1.printnumber();
    complex o2(1);
    o2.printnumber();  
    return 0;
}
