#include<iostream>
using namespace std;
int findmin(int a[],int start,int end)
{
if(start<end)
{
int mid=(start+end)/2;
if(a[mid]<a[mid-1] || mid==0)
return a[mid];
else if(a[mid]<a[end])
return findmin(a,start,mid-1);
else
return findmin(a,mid+1,end);
}
}
int main()
{
int a[]={3,4,5,6,1,2};
cout<<findmin(a,0,5);
}
