#include<iostream>
using namespace std;
int findpivot(int a[],int start,int end)
{
  if(start<end)
   {
   int mid=(start+end)/2;
    if(a[mid]>a[mid-1] && a[mid]>a[mid+1])
        return mid;
    else
    if(a[start]>a[mid])
    {
        return findpivot(a,start,mid-1);
    }
    else
        return findpivot(a,mid+1,end);
   }
}
int findno(int a[],int start,int end,int n)
{
    if(start<end)
    {
        int mid=(start+end)/2;
        if(a[mid]==n)
            return mid;
        else if(a[mid]<n)
            return findno(a,mid+1,end,n);
        else
            return findno(a,start,mid-1,n);
    }
}
int main()
{
int a[]={3,4,5,1,2};
int p=findpivot(a,0,4);
int n;
cin>>n;
if(a[p]==n)
    cout<<endl<<p;
else if(a[0]>n)
{
    cout<<findno(a,p+1,4,n);
}
else
    cout<<findno(a,0,p-1,n);

}
