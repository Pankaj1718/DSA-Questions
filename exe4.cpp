#include<iostream>
using namespace std;
class y;
class x{
   int a;
    public :
      void setdata(int a1){
     a = a1;
    }
     void display(void ){
        cout<<a;
     }
     friend void swap(x &, y &);
};

 class y{
    int b;
    public: 
     void setdata(int b1){
        b = b1;
     }
     void display(void){
        cout<<b;
     }
      friend void swap(x &, y &);
 };

 void swap(x &o1,y &o2){
   int  temp = o1.a;
    o1.a = o2.b;
    o2.b = temp;
 }
int main()
{
    x c1;
    c1.setdata(5);

    y c2;
    c2.setdata(7);

    swap(c1,c2);
    cout<<"the value after swap is "<<endl;
    cout<<"the value of a is : ";
    c1.display();
    cout<<endl;
    cout<<"the value of b is : ";
    c2.display();
    return 0;
}
