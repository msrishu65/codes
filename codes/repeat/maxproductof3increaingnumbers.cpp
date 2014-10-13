#include<iostream>
using namespace std;
int main()
{
int a[]={6,7,8,1,2,3,9,10};
int l[8],r[8];
int min=0,max=0;
l[0]=-1;
r[7]=-1;
for(int i=1;i<8;i++)
{
if(a[i]>a[max])
 {
  l[i]=max;
  max=i;
  }
  else if(a[i]<a[max] && a[i]>a[min])
  {
      l[i]=min;
      min=i;
   }
  else
  {
    l[i]=-1;
       min=i;
  }
}
//for(int i=0;i<8;i++)cout<<l[i]<<" ";
max=7;
for(int j=6;j>=0;j--)
{
    if(a[j]<a[max])
        r[j]=max;
    else if(a[j]>max)
    {
        r[j]=j;
        max=j;
    }
}
int m=0;
//for(int i=0;i<8;i++)cout<<r[i]<<" ";
for(int i=0;i<8;i++)
{
    if(l[i]!=-1 && r[i]!=-1)
    {
        if((a[l[i]]*a[i]*a[r[i]])>m)
            m=a[l[i]]*a[i]*a[r[i]];
            //cout<<a[l[i]]*a[i]*a[r[i]]<<" ";
    }
}
cout<<m;
}
