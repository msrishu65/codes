#include<iostream>
using namespace std;
int peak(int a[],int start,int end)
{
    if(a[start]>a[start+1])
        return a[start];
    if(a[end]>a[end-1])
        return a[end];
    if(start==end)
        return a[start];
    if(start<end)
    {
        int mid=(start+end)/2;
        if(a[mid]>a[mid+1] && a[mid]>a[mid-1])
            return a[mid];
        else if(a[mid]>a[mid-1])
            return peak(a,mid+1,end);
        else
            return peak(a,start,mid-1);
    }
}
int main()
{
    int a[]={3,2,1};
    cout<<peak(a,0,2);
}
