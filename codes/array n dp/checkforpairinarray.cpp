#include<iostream>
using namespace std;
int main()
{
int a[]={1,2,3,4,5,6,7,8,9,10};
int l=0;
int r=9;
int n;
cin>>n;
while(l<r)
{
if(a[l]+a[r]==n)
{
cout<<a[l]<<" "<<a[r];
break;
}
else
if(a[l]+a[r]<n)
{
l++;
}
else
{
r--;
}
}
return 0;

}
