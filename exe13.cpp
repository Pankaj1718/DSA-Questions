#include <iostream>
using namespace std;

class student
{
protected:
  int roll_no;

public:
  void setdata(int a)
  {
    roll_no = a;
  }
  void getdata()
  {
    cout << "the roll number is " << roll_no << endl;
  }
};

class test : virtual public student
{
protected:
  int maths, physics;

public:
  void setmarks(int m, int p)
  {
    maths = m;
    physics = p;
  }

  void getmarks()
  {
    cout << "the maths result of the student is " << maths << endl;
    cout << "the physics result of the student is " << physics << endl;
  }
};

class sports : virtual public student
{
protected:
  int cricket;
  int volleyball;

public:
  void setpoints(int c, int v)
  {
    cricket = c;
    volleyball = v;
  }
  void getpoints()
  {
    cout << "the points of this student in cricket is " << cricket << endl;
    cout << "the points of this student in volleyball is " << volleyball << endl;
  }
};

class results : public test, public sports
{

public:
  void print_skill()
  {
    cout << " the sports skill of this student is " << (cricket + volleyball) / 2 << endl;
    cout << " the test result of this student is " << (maths + physics) / 2 << endl;
  }
};
int main()

{
  results pankaj;
  pankaj.setdata(44);
  pankaj.getdata();
  pankaj.setmarks(77, 88);
  pankaj.setpoints(87, 76);
  pankaj.print_skill();
  return 0;
}
