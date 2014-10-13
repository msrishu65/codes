#include<iostream>
using namespace std;
int main()
{
int a[]={1, 2, 90, 10, 110};
int min=a[0],max=0,maxdiff=0;
for(int i=1;i<5;i++)
{
if(a[i]<min)
min=a[i];
if(a[i]>max)
max=a[i];
if(a[i]<max)
{
min=a[i];
max=0;
}
if(max-min>maxdiff)
{
maxdiff=max-min;
}
}
cout<<maxdiff;
}
