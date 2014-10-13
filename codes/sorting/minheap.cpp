#include<iostream>
using namespace std;
int size=10;
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void minheapify(int a[],int i)
{
    int l=2*i+1;
    int r=2*i+2;
    int s=i;
    if(a[i]>a[l] && l<size)
        s=l;
    if(a[r]<a[s] && r<size)
        s=r;
    if(s!=i)
    {
        /*int x=a[i];
        a[i]=a[s];
        a[s]=x;*/
        swap(&a[i],&a[s]);
        minheapify(a,s);
    }
}
void buildminheap(int a[])
{
    for(int i=(size-1)/2;i>=0;i--)
        minheapify(a,i);
}
int extract_min(int a[])
{
    int x=a[0];
    a[0]=a[size-1];
    size--;
    minheapify(a,0);
    return x;
}
int main()
{
    int a[10]={4,1,3,2,16,9,10,14,8,7};
    buildminheap(a);

    for(int i=0;i<10;i++)
        cout<<a[i]<<" ";
        cout<<endl<<extract_min(a);


}
