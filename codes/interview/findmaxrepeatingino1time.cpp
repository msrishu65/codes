#include<iostream>
using namespace std;
int main()
{
    int a[]={2, 3, 3, 5, 3, 4, 1, 7};
    for(int i=0;i<8;i++)
    {
        a[a[i]%8]=a[a[i]%8]+8;
    }
    int max=0;
    for(int i=1;i<8;i++)
    {
    //cout<<a[i]<<" ";
        if(a[i]>a[max])
       max=i;
    }
    cout<<max;
}
