#include<iostream>
using namespace std;
int findmax(int a[],int start,int end)
{
    if(start==end)
        return a[start];
  if(start<end)
   {
     int mid=(start+end)/2;
     if(a[mid]>a[mid-1] && a[mid]>a[mid+1])
             return a[mid];
     else if(a[mid]<a[mid+1])
             return findmax(a,mid+1,end);
     else
        return findmax(a,start,mid-1);
   }
}
int main()
{
int a[]={8, 10, 20, 80, 100, 200, 400, 500, 3, 2, 1};
int b[]={10, 20, 30, 40, 50};
int c[]={120, 100, 80, 20, 0};
cout<<findmax(a,0,10)<<endl;
cout<<findmax(b,0,4)<<endl;
cout<<findmax(c,0,4)<<endl;
}
