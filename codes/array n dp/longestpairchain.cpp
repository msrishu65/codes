#include<iostream>
using namespace std;
int main()
{
int a[5][2];
for(int i=0;i<5;i++)
{
    for(int j=0;j<2;j++)
        cin>>a[i][j];
}
int b[5];
for(int i=0;i<5;i++)b[i]=1;
for(int i=0;i<5;i++)
{
for(int j=0;j<i;j++)
{
if(a[i][0]>a[j][1] && b[i]<b[j]+1)
{
b[i]=b[j]+1;
}
}
}
int m=b[0];
for(int i=0;i<5;i++)
{
    if(b[i]>m)
        m=b[i];
}
cout<<m;
return 0;
}
