#include<iostream>
#include<stdlib.h>
using namespace std;
int segregate(int a[])
{
    int l=0,r=7;
    while(l<r)
    {
        while(a[l]>=0)
        {
            l++;
        }
        while(a[r]<0)
        {
            r--;
        }
        int t=a[l];
        a[l]=a[r];
        a[r]=t;
        l++;
        r--;
    }
    //cout<<l<<" "<<r;
    return l-1;
}
int findmissingnumber(int a[],int s)
{
    for(int i=0;i<=s;i++)
    {
        if(abs(a[i])<s &&a[abs(a[i])]>0)
        {
            a[abs(a[i])]=-a[abs(a[i])];
        }
    }
        for(int i=0;i<=s;i++)
        {
            if(a[i]>0)
                return a[i]-1;
        }
}
int main()
{
    int a[]={1,2,7,6,8,-1,-10,15};
    int h=segregate(a);
    //for(int i=0;i<8;i++)cout<<a[i]<<" ";
    cout<<findmissingnumber(a,h);
    return 0;
}
