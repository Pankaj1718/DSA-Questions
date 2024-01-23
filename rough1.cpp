#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n "<<endl;
    cin>>n;
    int ans=0;
    for (int i = 1; i <= n; i++)
    {
        ans=ans+i;
    }
    cout<<"The sum is : "<<ans;
    
    return 0;
}
