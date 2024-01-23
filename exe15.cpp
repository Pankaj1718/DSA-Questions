#include <iostream>
using namespace std;

class base
{
public:
  int a;
  void display()
  {
    cout << "The value of a is " << a << endl;
  }
};
class derived : public base
{
public:
  int b;
  void display()
  {
    cout << "The value of a is " << a << endl;
    cout << "The value of b is " << b << endl;
  }
};
int main()
{
  base a1;
  derived b1;
  base *base_ptr;
  base_ptr = &a1;
  base_ptr->a = 5;
  base_ptr->display();
  // base_ptr = &b1;    this will throw error

  derived *derived_ptr;
  derived_ptr = &b1;
  derived_ptr->b = 45;
  derived_ptr->a = 4;
  derived_ptr->display();

  return 0;
}
