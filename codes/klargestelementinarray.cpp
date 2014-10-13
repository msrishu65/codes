#include<iostream>
using namespace std;
void minheapify(int a[],int i,int n)
{
    int l=2*i+1;
    int r=2*i+2;
    int s=i;
    if(a[l]<a[i] && l<n)
        s=l;
    if(a[r]<a[s] && r<n)
        s=r;
    if(s!=i)
    {
        int x=a[i];
        a[i]=a[s];
        a[s]=x;
        minheapify(a,s,n);
    }
}
void buildheap(int a[],int n)
{
    for(int i=(n-1)/2;i>=0;i--)
        minheapify(a,i,n);
}
int main()
{
    int a[7]={1, 23, 12, 9, 30, 2, 50};
    int k;
    cin>>k;
    buildheap(a,k);
    //cout<<a[0]<<endl;
    for(int i=k+1;i<7;i++)
    {
        if(a[i]>a[0])
        {
            a[0]=a[i];
            minheapify(a,0,k);
        }
    }
    cout<<a[0];
}
