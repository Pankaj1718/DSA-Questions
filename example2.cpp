#include<iostream>
#include<string>
using namespace std;
class binary{
  private :
    string s;
    void read(void);
  public :
//void read(void);
    void chk_bin(void);

};
void binary :: read(void){
    cout<<"enter a binary number "<<endl;
    cin>>s;
  }
void binary :: chk_bin(void){
     for ( int i = 0; i < s.length(); i++)
     {
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"binary format is not correct"<<endl;
    
        }
       
     }
     
  }
int main()
{   
    binary b;
    b.read();
    b.chk_bin();
    return 0;
}
