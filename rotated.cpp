#include<iostream>
using namespace std;

class college{
   string id[100];
   char name[100];
   public: 
      int result[100];
      int counter;
   
  void initcounter(void){
     counter = 1;
   }

   void setresult(void){
   cout<<"enter the id of student "<<endl;
   cin>>id[counter];
   cout<<"enter the name of student "<<endl;
   cin>>name[counter];
   cout<<"enter the result of student "<<endl;
   cin>>result[counter];
   counter++;
}
   void getresult(void){
   for(int i=1;i<=counter;i++){
      cout<<"the result of "<<name[i]<<" with id "<<id[i]<<" is "<<result[i]<<endl;
   }
}
};

int main(){
   college uvce1,uvce2,uvce3;
   uvce1.setresult();
   uvce2.setresult();
   uvce3.setresult();
   uvce1.getresult();
   return 0;
}

 


