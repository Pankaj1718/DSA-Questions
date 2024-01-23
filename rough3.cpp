/*#include<iostream>
using namespace std;
int main()
{  
    
     int *arr = new int[5];
    arr[0] = 33;
    arr[1] = 56;
    arr[2] = 23;
    arr[3] = 56;
    arr[4] = 78;
    cout<<"the value of arr[0] is "<<arr[0]<<endl;
    cout<<"the value of arr[1] is "<<arr[1]<<endl;
    cout<<"the value of arr[2] is "<<arr[2]<<endl;
    cout<<"the value of arr[3] is "<<arr[3]<<endl;
    cout<<"the value of arr[4] is "<<arr[4]<<endl;
    return 0;
}
*/
#include<iostream>
using namespace std;
int main()
{
    int *a = new int (1);
   // delete a;
    cout<<" the address of a is "<<a;
    cout<<" the value at a is "<<*a;
    return 0;
}
