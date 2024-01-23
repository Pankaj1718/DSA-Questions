#include <iostream>
using namespace std;

template <class t1, class t2>
class vector
{
public:
  t1 a;
  t2 b;

  vector(t1 a1, t2 b1)
  {
    a = a1;
    b = b1;
  }
  void display()
  {
    cout << " the value of a is " << a << endl;
    cout << " the value of b is " << b << endl;
  }
};

int main()
{

  vector<float, float> v1(3.5, 7.5);
  v1.display();
  return 0;
}
