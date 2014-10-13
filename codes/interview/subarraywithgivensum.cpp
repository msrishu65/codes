#include<iostream>
using namespace std;
int main()
{
    int a[6]={5,7,2,-1,3,-4};
    int sum[6];
    sum[0]=a[0];
    for(int i=1;i<6;i++)
    {
        sum[i]=sum[i-1]+a[i];
    }
    int h[1000];
    for(int i=0;i<1000;i++)
        h[i]=0;
    for(int i=0;i<6;i++)
    {
        if(h[sum[i]]==0)
        h[sum[i]]=i;
        else
        {
            for(int j=h[sum[i]]+1;j<=i;j++)
        {
            cout<<a[j]<<" ";
        }
        cout<<endl;
       }
    }
}
