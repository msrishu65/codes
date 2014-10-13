#include<iostream>
using namespace std;
void binarysearch(int a[],int start,int end,int n)
{
    int mid=(start+end)/2;
    if(start<=end)
    {
        if(a[mid]==n)
        {
            cout<<"found at"<<" "<<mid<<endl;
            return;
        }
        else if(a[mid]>n)
        {
            binarysearch(a,start,mid-1,n);

        }
        else
            binarysearch(a,mid+1,end,n);
    }

}
int findpivot(int a[],int l,int r)
{
    if(l<r)
    {
    int mid=(l+r)/2;
    if(a[mid]>a[mid+1])
        return mid;
    else if(a[l]>a[mid])
        return findpivot(a,l,mid-1);
    else
        return findpivot(a,mid+1,r);
    }
}
int main()
{
int a[5];
for(int i=0;i<5;i++)cin>>a[i];
int n;
cin>>n;
int pivot=findpivot(a,0,5);
if(a[0]<n)
binarysearch(a,0,pivot,n);
else
binarysearch(a,pivot+1,4,n);
return 0;
}
