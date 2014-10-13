#include<iostream>
using namespace std;
int main()
{
int a[]={12,11,10,5,6,2,30};
int s[7];
int g[7];
int min=0;
int max=6;
s[0]=-1;
g[6]=-1;
for(int i=1;i<7;i++)
{
if(a[i]<a[min])
{
    min=i;
    s[i]=-1;
}
else
s[i]=min;
}
for(int i=5;i>=0;i--)
{
if(a[i]>a[max])
{
max=i;
g[i]=-1;
}
else
g[i]=max;
}

cout<<endl;
for(int i=0;i<7;i++)
{
if(s[i]!=-1 && g[i]!=-1)
{
cout<<a[s[i]]<<" "<<a[i]<<" "<<a[g[i]];

}
}
return 0;
}
