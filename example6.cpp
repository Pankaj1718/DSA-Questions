#include<iostream>
using namespace std;

struct student{
  int id;
  float result;
  char grade;
} ;

int main()
{ 
  struct student pankaj;
  pankaj.id = '44';
  pankaj.result = 74.8;
  pankaj.grade = 'b';

struct student rohit;
 rohit.id = '45';
 rohit.result = 80.3;
 rohit.grade = 'a';
  cout<<"the id of pankaj is "<<pankaj.id<<endl;
  cout<<"the result of pankaj is "<<pankaj.result<<endl;
  cout <<"the grade of pankaj is "<<pankaj.grade<<endl;
  cout<<endl;
  cout<<"the id of rohit is "<<rohit.id<<endl;
  cout<<"the result of rohit is "<<rohit.result<<endl;
  cout<<"the grade of rohit is "<<rohit.grade<<endl;
 return 0;
}
