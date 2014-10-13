#include<iostream>
using namespace std;
int findfirst(int a[],int start,int end,int x)
{
if(start<end)
{
  int mid=(start+end)/2;
  if(a[mid]>a[mid-1] && a[mid==x])
       return mid;
  else if(a[mid]==x || a[mid]>x)
    return findfirst(a,start,mid-1,x);
  else
    return findfirst(a,mid+1,end,x);
}
return 0;
}
int main()
{
int a[]={1,1,1,2,3};

int j=findfirst(a,0,4,1);
if(a[j+2]==1)
    cout<<"yes";
else
    cout<<"no";
}
