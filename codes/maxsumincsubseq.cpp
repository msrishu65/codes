#include<iostream>
using namespace std;
int main()
{
int a[7]={1, 101, 2, 3, 100, 4, 5};
int m[7]={0};
m[0]=1;
for(int i=1;i<7;i++)
{
    for(int j=0;j<i;j++)
    {
        if(a[i]>a[j] && m[i]<m[j]+a[i])
            m[i]=m[j]+a[i];
    }
}
int mx=0;
for(int i=0;i<7;i++)
{
    if(m[i]>mx)
        mx=m[i];
}
cout<<mx;
}
