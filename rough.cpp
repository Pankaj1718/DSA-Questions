#include<iostream>
using namespace std;

template <class t1,class t2>
class vector1{
    public :
      t1 real1;
      t2 complex1;
      vector1(t1 a, t2 b){
          real1 = a;
          complex1 = b;
      }

      virtual void display(){
        cout<<"The value of vector1 is "<<real1
            <<" + "<<complex1<<"i"<<endl;
      }
};

int main()
{
    vector1<float,float>v(6.7,5.4);
    v.display();
    return 0;
}
