#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
int t,e,f=100,n;
//cin>>t;

cout<<endl;
int a[10000];
for(int i=0;i<10000;i++)
a[i]=INT_MAX;
int p[2]={1,30};
int w[2]={1,50};
a[0]=0;
a[1]=1;
for(int i=2;i<=f;i++)
{
    for(int j=0;j<2;j++)
    {
        if(w[j]<=i && a[i]>a[i-w[j]]+p[j])
            a[i]=a[i-w[j]]+p[j];
    }
    cout<<a[i]<<endl;
}
}
