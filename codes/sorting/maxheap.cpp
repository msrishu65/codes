#include<iostream>
using namespace std;
int size=10;
void maxheapify(int a[],int i)
{
    int l=2*i+1;
    int r=2*i+2;
    int largest;
    if(a[l]>a[i] && l<size)
        largest=l;
    else
        largest=i;
    if(a[r]>a[largest] && r<size)
        largest=r;
    if(largest!=i)
    {
        int x=a[i];
        a[i]=a[largest];
        a[largest]=x;
        maxheapify(a,largest);
    }
}
int buildmaxheap(int a[],int size)
{
    for(int i=(size-1)/2;i>=0;i--)
        maxheapify(a,i);
}
void heapsort(int a[])
{
    buildmaxheap(a,size);
    int hs=size;
    for(int i=hs-1;i>0;i--)
    {
     int x=a[0];
     a[0]=a[i];
     a[i]=x;
     size--;
     maxheapify(a,0);
    }
}
int main()
{
    int a[10]={4,1,3,2,16,9,10,14,8,7};
    //heapsort(a);
    buildmaxheap(a,size);
    for(int i=0;i<10;i++)
        cout<<a[i]<<" ";
}
