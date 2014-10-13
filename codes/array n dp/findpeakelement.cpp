#include<iostream>
using namespace std;
int findpeak(int a[],int start,int end)
{
if(start<=end)
{
    int mid=(start+end)/2;
    if(mid==0||a[mid]>a[mid+1] &&a[mid]>a[mid-1])
        return a[mid];
    else if(a[mid]>a[mid+1])
        return findpeak(a,start,mid-1);
    else
        return findpeak(a,mid+1,end);
}
}
int main()
{
int a[]={1, 3, 20, 4, 1, 0};
cout<<findpeak(a,0,5);
}
