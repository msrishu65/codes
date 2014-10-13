#include<iostream>
using namespace std;
int main()
{
int a[8];
for(int i=0;i<8;i++)cin>>a[8];
int max=a[0];int mh=a[0];
for(int i=1;i<8;i++)
{
mh=mh+a[i];
if(mh<0)mh=0;
if(mh>max)
max=mh;
}
cout<<max;
return 0;
}
