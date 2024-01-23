#include<iostream>
#include<string>
using namespace std;
class shop{
    string name[100];
    int price[100];
    int counter;
 public :
  
    void initcounter(void){
      counter = 0;
    }
    void setprice(void);
    void getprice(void);
  };
  
  void shop :: setprice(void){
    cout<<"enter the name of product "<<endl;
    cin>>name[counter];
    cout<<"enter the price of product "<<endl;
    cin>>price[counter];
    counter++;
  }
  void shop :: getprice(void){
    for (int i = 0; i < counter; i++)
    {
       cout<<"the price of "<<name[i]<<" is RS."<<price[i]<<endl;
    }
    
  }
 
int main()
{ 
  shop dukaan;

  dukaan.initcounter();
  dukaan.setprice();
  dukaan.setprice();
  dukaan.setprice();
  dukaan.setprice();
  dukaan.getprice(); 
    return 0;
}
