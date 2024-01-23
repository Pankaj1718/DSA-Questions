#include<iostream>
using namespace std;

class employee{
      int salary;
     public :
       int id ;
       int age;  
       void setdata();
       void getdata();
          
};
void employee :: setdata(){
    salary = 10000;
    id = 44;
    age = 25;

}
void employee :: getdata(){
    cout<<"the salary of this employee with employee id "<<id<<" is "<<salary<<" and his age is "<<age<<endl;
}



class workers : public employee {
    public :
      char level;
      void setlevel(){
        level = 'B';
      }
      void display(){
        getdata();
        cout<<"the level of skill of this worker is "<<level<<endl;
      }
};
int main()
{
    employee pankaj;
    pankaj.setdata();
    pankaj.getdata();
    workers pappu;
    
    pappu.setlevel();
    pappu.display();
    return 0;
}
