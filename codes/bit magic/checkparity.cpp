#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int p=0;
while(n!=0)
{
    p=!p;
    n=n&(n-1);
}
if(p)
    cout<<"odd";
else
    cout<<"even";
}
