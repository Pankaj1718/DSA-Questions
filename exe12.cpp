#include<iostream>
using namespace std;

class simplecalculator{

       public:
       int data1;
       int data2;
       void setdata(int a,int b){
            data1 = a;
            data2 = b;
        }

       void getresult(){
        cout<<" the addition of data1 and data2 is "<<data1+data2<<endl;
        cout<<" the substraction of data1 and data2 is "<<data1-data2<<endl;
        cout<<" the multiplication of data1 and data2 is "<<data1*data2<<endl;
        cout<<" the division of data1 and data2 is "<<data1/data2<<endl;
       }
};

class scientificcalculator{
       public:
          int angle;
         void sine(int a){
           angle = a;
           switch (angle){

              case 0:
              cout<<0;
              break;

              case 30:
              cout<<0.5;
              break;

              case 45:
              cout<<0.707;
              break;

             case 60:
             cout<<0.866;
             break;

             default:
             cout<<"not defined";
             break;  
          }
         }
};


class hybridcalculator : public simplecalculator,public scientificcalculator {

       int a;

};


int main()
{
    /*simplecalculator a;
    a.setdata(20,5);
    a.getresult();


    scientificcalculator b;
    b.sine(45);
    cout<<endl;
    b.sine(0);
    */
   hybridcalculator a;
   a.setdata(20,5);
   a.getresult();
   a.sine(30);
    return 0;
}
