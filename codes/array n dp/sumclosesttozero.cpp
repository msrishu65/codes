#include<iostream>
#include<stdio.h>
#include<math.h>
#include<limits.h>
#include<stdlib.h>
using namespace std;
int main()
{
int a[]={-80,-10,1,60,70,85};
int l=0,r=5;
int i,j;
int msum=INT_MAX;
while(l<r)
{
int sum=(a[l]+a[r]);
if(abs(sum)<abs(msum))
    {
        msum=sum;
        i=l;j=r;
    }
if(sum<0)
    l++;
else
    r--;
}
cout<<a[i]<<" "<<a[j];
}
