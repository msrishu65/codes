#include<iostream>
using namespace std;
int firstocc(int a[],int start,int end,int x)
{
if(start<=end)
{
int mid=(start+end)/2;
if(a[mid]==x && a[mid-1]!=x)
{
return mid;
}
else if(a[mid]==x || a[mid]>x)
return firstocc(a,start,mid-1,x);
else
    return firstocc(a,mid+1,end,x);

}
}
int lastocc(int a[],int start,int end,int x)
{
    if(start<=end)
    {
        int mid=(start+end)/2;
        if(a[mid]==x&& a[mid+1]!=x)
            return mid;
        else if(a[mid]==x || a[mid]<x)
            return lastocc(a,mid+1,end,x);
        else
            return lastocc(a,start,mid-1,x);
    }
}
int main()
{
int a[]={1,2,3,3,3,4,5};
int x;
cin>>x;
int i=firstocc(a,0,6,x);
cout<<i<<endl;
int j=lastocc(a,0,6,x);
cout<<j<<endl;
cout<<j-i+1;
}
