#include<iostream>
using namespace std;
int main()
{
    int a[]={10,2,3,5,1,2};
    int i=0;
    int start=0,end=0;
    int n=sizeof(a)/sizeof(0);
    while(i<n-1)
    {
        if(a[i]>a[i+1])
        {
            start=i;
            break;
        }
        i++;
    }
    int b[n];
    int m=a[n-1];
    for(int i=n-2;i>start;i--)
    {
        if(a[i]>m)
        {
            m=a[i];
        }
        b[i]=m;
    }
    int ans=0;
    i=start+1;
    while(i<n-1)
    {
        if(a[i]>a[start])
            start=i;
        ans=ans+min(a[start],b[i])-a[i];
        i++;
    }
    cout<<ans;
}
