#include<iostream>
using namespace std;
int main()
{
    int a[]={0, 1, 0, 1, 1, 1};
    int l=0,r=5;
    while(l<r)
    {
        while(a[l]==0 && l<r)
            l++;
        while(a[r]==1 && l<r)
            r--;
            if(l<r)
            {
        int t=a[l];
        a[l]=a[r];
        a[r]=t;
            }
    }
        for(int i=0;i<6;i++)cout<<a[i]<<" ";

}
