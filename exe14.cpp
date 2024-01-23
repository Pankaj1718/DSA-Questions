#include<iostream>
using namespace std;
class shopitem{
    int id;
    int price;

  public:
     void setdata(int a, int b){
        id = a;
        price = b;
     }
     void getdata(){
        cout<<"the id of item is "<<id<<endl;
        cout<<"the price of item is "<<price<<endl;
     }
};
int main(){
    
    int size = 3;
    shopitem *ptr = new shopitem[size];
    shopitem *ptrtemp = ptr;
    int p,i;
    float q;
    for ( i = 0; i < size; i++)
    {
        cout<<"Enter the id and price of the item no."<<i+1<<endl;
        cin>>p>>q;
        ptr ->setdata(p,q);
        ptr++;
    }
    for ( i = 0; i < size; i++)
    {
        cout<<" Item number : "<<i+1<<endl;
        ptrtemp ->getdata();
        ptrtemp ++; 
    }
    

    
    return 0;
}
