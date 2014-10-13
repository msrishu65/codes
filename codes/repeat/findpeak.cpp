#include<iostream>
using namespace std;
int findpeak(int a[],int start,int end)
{
if(start<=end)
{

int mid=(start+end)/2;
if(a[mid]>a[mid-1] && a[mid]>a[mid+1] || mid==0 || mid==6)
return a[mid];
else if(a[mid]<a[mid-1])
return findpeak(a,start,mid-1);
else return findpeak(a,mid+1,end);
}
}
int main()
{
int a[]={10, 20, 15, 2, 23, 90, 67};
cout<<findpeak(a,0,6);


}
