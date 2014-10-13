#include<iostream>
using namespace std;
int maxelement(int a[],int start,int end)
{
    if(start<=end)
    {
        int mid=(start+end)/2;
        if(a[mid]>a[mid+1] && a[mid]>a[mid-1])
            return a[mid];
            else if(a[mid]<a[mid-1])
                return maxelement(a,0,mid-1);
            else if(a[mid]>a[mid-1] &&a[mid]<a[mid+1])
                return maxelement(a,mid+1,end);


    }
    return -1;
}
int main()
{
    int a[]={1, 3, 5,10,50,9,7};
    cout<<maxelement(a,0,6);
    return 0;
}
