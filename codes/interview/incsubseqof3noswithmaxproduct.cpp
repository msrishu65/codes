#include<iostream>
using namespace std;
int main()
{
  int a[9]={11,10,9,5,2,3,6,30,7};
  int l[9];
  int r[9];
  for(int i=0;i<9;i++)
  {
      l[i]=-1;
      r[i]=-1;
  }
  int min=0,max=8;
  for(int i=1;i<9;i++)
  {
      if(a[i]>a[min])
        l[i]=min;
      else
        min=i;
  }
for(int i=7;i>=0;i--)
{
    if(a[i]<a[max])
        r[i]=max;
    else
     max=i;
}
int maxp=0;
  for(int i=0;i<9;i++)
  {
    if(l[i]!=-1 && r[i]!=-1)
    {
        cout<<a[l[i]]<<" "<<a[i]<<" "<<a[r[i]]<<endl;
    }
  }
}
