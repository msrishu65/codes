#include<iostream>
using namespace std;
int main()
{
int a[]= {16, 17, 4, 3, 5, 2};
int max=-1;
for(int i=5;i>=0;i--)
{
if(a[i]>max)
{
int t=a[i];
a[i]=max;
max=t;
}
else
a[i]=max;
}
for(int i=0;i<6;i++)
cout<<a[i]<<" ";



}
