#include<iostream>
using namespace std;
int ceil(int a[],int start,int end,int x)
{
if(start<=end)
{
    int mid=(start+end)/2;
    if(a[mid]>x &&a[mid-1]<x)
        return a[mid];
    else if(a[mid]<x)
        return ceil(a,mid+1,end,x);
    else
        return ceil(a,start,mid-1,x);
}
return -1;
}
int floor(int a[],int start,int end,int x)
{
    if(start<=end)
    {
        if(start==end)
            return a[start];
        int mid=(start+end)/2;
        if(a[mid]<x &&x<a[mid+1])
            return a[mid];
        else if(a[mid]>x)
            return floor(a,start,mid-1,x);
        else
            return floor(a,mid+1,end,x);
    }

}
int main()
{
int a[] = {1, 2, 8, 10, 11, 12, 19};
int x;
cin>>x;
int g=ceil(a,0,6,x);
cout<<g<<endl;
cout<<floor(a,0,6,x);
}
