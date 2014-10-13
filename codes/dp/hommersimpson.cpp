#include<iostream>
using namespace std;
int main()
{
int m=3;
int n=5;
int t;
cin>>t;
int a[t+1];
for(int i=0;i<t+1;i++)
a[i]=0;
a[m]=1;
for(int i=m+1;i<=t;i++)
{
    if(i%m==0 || i%n==0)
    {
        if(i%m==0)
    a[i]=a[i-m]+1;
    if(i%n==0 && a[i-n]+1>a[i])
    a[i]=a[i-n]+1;
    }
    else
        a[i]=a[i-1];

cout<<i<<" "<<a[i]<<endl;
}
cout<<a[t];
}
