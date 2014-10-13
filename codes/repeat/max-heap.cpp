#include<iostream>
using namespace std;
void maxheapify(int [],int ,int);
void buildmaxheap(int a[],int n)
{
    int hs=n;
    int i=(hs-1)/2;
    while(i>=0)
    {
        maxheapify(a,i,hs);
        i--;
    }
}
void maxheapify(int a[],int i,int hs)
{
int l=2*i+1;
int r=2*i+2;
int largest=i;
   if(a[l]>a[i] && l<hs)
     largest=l;
   if(a[r]>a[i] && l<hs)
     largest=r;
   if(largest!=i)
     {
       int t=a[i];
       a[i]=a[largest];
       a[largest]=t;
       maxheapify(a,largest,hs);
     }
}
int main()
{
int a[]={4,1,3,2,16,9,10,14,8,7};
buildmaxheap(a,10);
for(int i=1;i<10;i++)cout<<a[i]<<" ";
}
