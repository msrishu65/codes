#include<iostream>
#include<limits.h>
using namespace std;
int minjumps(int a[],int i,int n)
{
    int c;
    if(i>n)
        return INT_MAX;
    if(i==n)
        return c;
        c++;
    if(minjumps(a,i+a[i]-1,n)!=INT_MAX)
        return minjumps(a,i+a[i]-1,n);
}
int main()
{
int a[]={2,3,5,8,9,2,6,7,6,8,9};
cout<<minjumps(a,0,10);
}
