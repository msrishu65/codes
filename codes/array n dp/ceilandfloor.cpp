#include<iostream>
using namespace std;
int ceil(int a[],int low,int high,int x)
{
    if(x<=a[low])
    return a[low];
    if(x>a[high])
    return -1;
    int mid=(low+high)/2;
    if(a[mid]==x)
        return a[mid];
    if(a[mid]<x)
    {
        if(mid+1<=high && a[mid+1]>x)
            return a[mid+1];
        else
            return ceil(a,mid+1,high,x);
    }
    if(a[mid]>x)
    {
        if(a[mid-1]<x &&mid-1>=low)
        {
            return a[mid];
        }
        else
            return ceil(a,low,mid-1,x);
    }
}
int floor(int a[],int low,int high,int x)
{

    if(a[high]<=x)
        return a[high];
    if(a[low]>x)
        return -1;
    int mid=(low+high)/2;
    if(a[mid]==x)
        return a[mid];
    if(a[mid]>x)
    {
        if(a[mid-1]<x && mid-1>=low)
            return a[mid-1];
        else
            floor(a,low,mid-1,x);
    }
    if(a[mid]<x)
    {
        if(a[mid+1]>x && mid+1<=high)
            return a[mid];
        else
            floor(a,mid+1,high,x);
    }
}
int main()
{
     int a[]= {1, 2, 8, 10, 10, 12, 19};
cout<<ceil(a,0,6,14);
cout<<endl<<floor(a,0,6,9);
}
