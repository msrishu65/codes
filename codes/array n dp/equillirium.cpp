#include<iostream>
using namespace std;
int main()
{
    int a[]={-7, 1, 5, 2, -4, 3, 0};
    int s=0;
    int l=0;
    for(int i=0;i<7;i++)
    {
        s=s+a[i];
    }
    for(int i=0;i<7;i++)
    {
        s=s-a[i];
        if(l==s)
        {
            cout<<i<<" ";
        }
        l=l+a[i];
    }
    return 0;
}
