#include<iostream>
using namespace std;
int main()
{
    int a[]={12, 34, 45, 9, 8, 90, 3};
    int l=0;
    int r=6;
    while(l<r)
    {
        while(a[l]%2==0)
        {
            l++;
        }
        while(a[r]%2!=0)
        {
            r--;
        }
        if(l<r)
        {
            int t=a[l];
            a[l]=a[r];
            a[r]=t;
        }
    }
    for(int i=0;i<7;i++)cout<<a[i]<<" ";
    return 0;
}
