#include<iostream>
using namespace std;
int main()
{
int a[]={1,2,5};
int s;
cin>>s;
int m[s+1];
for(int i=0;i<=s;i++)
    m[i]=0;
    m[0]=1;
for(int i=0;i<3;i++)
{
    for(int j=a[i];j<=s;j++)
    {
        m[j]=m[j]+m[j-a[i]];
    }
}
cout<<m[s];
}
