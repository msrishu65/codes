#include<iostream>
using namespace std;
void swap(int *x, int *y);
void MinHeapify(int [],int );
int size=10;
void MinHeap(int a[])
{
    int i = (size - 1)/2;
    while (i >= 0)
    {
        MinHeapify(a,i);
        i--;
    }
}
void MinHeapify(int a[],int i)
{
    int l = 2*i+1;
    int r = 2*i+2;
    int smallest = i;
    if (l < size && a[l] < a[i])
        smallest = l;
    if (r < size && a[r] < a[smallest])
        smallest = r;
    if (smallest != i)
    {
        swap(&a[i], &a[smallest]);
        MinHeapify(a,smallest);
    }
}
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
     int a[10]={4,1,3,2,16,9,10,14,8,7};
    MinHeap(a);
    for(int i=0;i<10;i++)
        cout<<a[i]<<" ";
}
