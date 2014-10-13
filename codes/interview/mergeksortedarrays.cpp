#include<iostream>
using namespace std;
int size=4;
void minheapify(int x,int a[])
{
    int l=2*x+1;
    int r=2*x+2;
    int smallest;
    if(a[l]<a[x] && l<size)
        smallest=l;
        else
            smallest=x;
        if(a[r]<x && r<size)
            smallest=r;
        if(smallest!=x)
        {
            int t=a[x];
            a[x]=a[smallest];
            a[smallest]=t;
            minheapify(smallest,a);
        }
}
void buildminheap(int a[],int n)
{
    for(int i=(n-1)/2;i>=0;i--)
        buildminheap(a,i);
}
void mergeksortedarrays(int m[4][4],int b[])
{


}
int main()
{
int m[4][4] = { {10, 20, 30, 40},
                    {15, 25, 35, 45},
                    {27, 29, 37, 48},
                    {32, 33, 39, 50}
                    };

    int b[16];
    mergeksortedarrays(m,b);
}
