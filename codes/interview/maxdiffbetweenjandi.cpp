#include<iostream>
using namespace std;
int main()
{
    int a[]={34, 8, 10, 3, 2, 80, 30, 33, 1};
    int l[9];
    int r[9];
    l[1]=a[1];
   int min=l[1];
    for(int i=1;i<9;i++)
    {
        if(l[i]>min)
        l[i]=min;
        else
            min=l[i];
    }
    r[8]=a[8];
    int max=r[8];
    for(int i=7;i>=0;i--)
    {
        if(r[i]>max)
            max=r[i];
        else
            r[i]=max;
    }

}
