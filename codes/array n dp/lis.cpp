#include<iostream>
using namespace std;
int main()
{
int a[8];
int b[8];
for(int i=0;i<8;i++)
{cin>>a[i];
b[i]=1;
}
for(int i=1;i<8;i++)
{
for(int j=0;j<i;j++)
{
if(a[i]>a[j] && b[i]<b[j]+1)
b[i]=b[j]+1;
}
}
int m=b[0];
for( int j=0;j<8;j++)
{
    cout<<b[j];
if(b[j]>m)
m=b[j];
}
cout<<m;
}
