#include<iostream>
using namespace std;
int binarysearch(int a[],int start,int end,int n)
{
if(start<end)
{
  int  mid=(start+end)/2;
    if(a[mid]==n)
        return mid;
    else if(n<a[mid])
    {
        binarysearch(a,start,mid-1,n);
    }
    else
    {
        binarysearch(a,mid+1,end,n);
    }
    }
    return -1;
}
int main()
{
int a[]={1,2,3,4,5,6,7,8,9,10};
int n;
cin>>n;
int ans=binarysearch(a,0,9,n);
cout<<ans;
return 0;

}
