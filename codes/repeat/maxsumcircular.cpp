#include<iostream>
using namespace std;
int main()
{
int a[]={8, -8, 9, -9, 10, -11, 12};
int maxsum=0,cur=0;
for(int i=0;i<7;i++)
{
cur=cur+a[i];
if(cur>maxsum)
maxsum=cur;
if(cur<0)
cur=0;
}
int m=maxsum;
int s=0;
for(int i=0;i<7;i++)
{
 s=s+a[i];
 a[i]=-a[i];
}
cur=0,maxsum=0;
for(int i=0;i<7;i++)
{
cur=cur+a[i];
if(cur>maxsum)
maxsum=cur;
if(cur<0)
cur=0;
}
int m2=s+maxsum;
cout<<max(m,m2);
}
