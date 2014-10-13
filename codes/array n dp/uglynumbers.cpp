#include<iostream>
using namespace std;
int main()
{
int u[150];
int i2=0;
int i3=0;int i5=0;
u[0]=1;
int i2u=i2*2;
int i3u=i3*3;
int i5u=i5*5;
for(int i=0;i<150;i++)
{
int nu;
nu=min(i2u,i3u);
nu=min(nu,i5u);
if(nu==i2u)
{
i2=i2+1;
i2u=i2*2;
}
if(nu==i3u)
{
i3=i3+1;
i3u=i3*3;
}
if(nu==i5u)
{
i5=i5+1;
i5u=i5*5;
}
u[i]=nu;
}
cout<<u[149];
}
