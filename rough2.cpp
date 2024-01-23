#include<iostream>
using namespace std;

class  base{
      public:
        
        virtual void display(){
            cout<<"base display called "<<endl;
        }
};

class derived : public base{
    public: 
    void display(){
        cout<<"derived display called "<<endl;
    }
};
int main()
{  
   derived d1;
   base* bptr= &d1;
   bptr->display();

   base b1;
   b1.display();
    return 0;
}
