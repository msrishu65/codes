#include<iostream>
using namespace std;
int findpivot(int a[],int start,int end)
{
    if(start>end)
        return -1;
    if(start==end)
        return start;
    int mid=(start+end)/2;
    if(mid >0 && mid<7 && a[mid]>a[mid-1] && a[mid]>a[mid+1])
        return mid;
    else if(a[mid]<a[mid+1])
        return findpivot(a,mid+1,end);
    else
        return findpivot(a,start,mid-1);
}
int findelement(int a[],int start,int end,int n,int f)
{
    if(start>end)
        return -1;
    if(start==end && a[start]==n)
        return start;
        int mid=(start+end)/2;

        if(a[mid]==n)
            return mid;
    else if(f)
    {
        if(a[mid]<n)
            return findelement(a,mid+1,end,n,f);
        else
            return findelement(a,start,mid-1,n,f);
    }
    else
    {
        if(a[mid]>n)
           return findelement(a,mid+1,end,n,f);
           else
            return findelement(a,start,mid-1,n,f);
    }
}
int main()
{
    int a[]={2,4,6,8,7,5,4,3};
    int n;
    cin>>n;
    int p=findpivot(a,0,7);
    if(a[p]==n)
        cout<<p<<" ";
    int f=1;
    int x=findelement(a,0,p-1,n,f);
        if(x>=0)
            cout<<x<<" ";
        int y=(findelement(a,p+1,7,n,!f));
        if(y>=0)
            cout<<y;
}
