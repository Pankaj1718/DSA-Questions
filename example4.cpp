#include<iostream>
using namespace std;

class student{
  private : 
    int a;
    int b;
  public : 
    int c;
    int d;
    int counter;

  initcounter(){
    counter = 1;
}

  setdata(int a, int b, int c,int d){
     this->a = a;
     this->b = b;
     this->c = c;
     this->d = d;
     
  }
  getdata(){
    cout<<counter<<". student information : "<<endl;
    cout<<" a value of the student is "<<a<<endl;
    cout<<" b value of the student is "<<b<<endl;
    cout<<" c value of the student is "<<c<<endl;
    cout<<" d value of the student is "<<d<<endl;
    counter++;
  }
};
int main()
{
    student pankaj;
    pankaj.initcounter();
    pankaj.setdata(4,8,34,74);
    pankaj.getdata();
    
    student rohit;
    rohit.setdata(9,67,48,7);
    rohit.getdata();
 
    return 0;
}
