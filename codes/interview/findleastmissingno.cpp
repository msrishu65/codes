#include<iostream>
using namespace std;
int findmissingnumber(int a[],int start,int end)
{
    if(start>end)
    return end+1;
    if(start!=a[start]-1)
        return a[start]-1;
     int mid=(start+end)/2;
     if(a[mid]>mid+1)
            return findmissingnumber(a,start,mid-1);
     else
        return findmissingnumber(a,mid+1,end);
}
int main()
{
    int a[]={1,2,3,4,5,7};
    int c=findmissingnumber(a,0,5);
    cout<<c;
}
