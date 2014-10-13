#include<iostream>
#include<limits.h>
using namespace std;
int merge(int [],int ,int ,int );
int mergesort(int a[],int start,int end)
{
    if(start<end)
    {
        int mid=(start+end)/2;
        mergesort(a,start,mid);
        mergesort(a,mid+1,end);
        merge(a,start,mid,end);
    }
    return 0;
}
int merge(int a[],int start,int mid,int end)
{

    int n1=mid-start+1;
    int n2=end-mid;
    int l[n1+1];
    int r[n2+1];
    for(int i=0;i<n1;i++)
    {
        l[i]=a[start+i];
    }
    for(int i=0;i<n2;i++)
    {
        r[i]=a[mid+1+i];
    }
    l[n1]=INT_MAX;
    r[n2]=INT_MAX;
        int j=0;
        int k=0;
        for(int i=start;i<=end;i++)
        {
            if(l[j]<r[k])
            {
                a[i]=l[j];
                j++;
            }
            else
            {
                a[i]=r[k];
                k++;
            }
        }
return 0;
}
int main()
{
int a[10]={4,1,3,2,16,9,10,14,8,7};
mergesort(a,0,9);
for(int i=0;i<10;i++)
    cout<<a[i]<<" ";

}
