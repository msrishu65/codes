#include<bits/stdc++.h>
using namespace std;
int a[222],ans[222];
int main()
{
freopen("in.txt","r",stdin);
int n;cin>>n;
for(int i=0;i<n;i++)
{
cin>>a[i];
ans[i]=0;
}
ans[0]=a[0];
ans[1]=a[1];
ans[2]=a[0]+a[2];
for(int i=3;i<n-1;i++)
{
    ans[i]=max(ans[i-2],ans[i-3])+a[i];
}
int m=max(ans[n-1],ans[n-2]);
ans[n-1]=a[n-1];
ans[n-2]=a[n-2];
ans[n-3]=a[n-1]+a[n-3];
for(int i=n-4;i>0;i--)
{
    ans[i]=max(ans[i+2],ans[i+3])+a[i];
}
int mx=max(ans[1],ans[2]);
int mx1=max(mx,m);
cout<<endl<<mx1;
return 0;
}
