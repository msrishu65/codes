#include<iostream>
#include<stdio.h>
using namespace std;
int a[100010];
long long dp[100010];
long long solve(int i,int j)
{
    if(i>=j)
        return 0;
    if(dp[i]!=-1)
        return dp[i];
    if(i+1==j)
        return dp[i]=a[i];
    if(i+2==j)
        return dp[i]=a[i]+a[i+1];
    if(i+3==j)
        return dp[i]=a[i]+a[i+1]+a[i+2];
    else
        return dp[i]=max(a[i]+solve(i+2,j),max(a[i]+a[i+1]+solve(i+4,j),a[i]+a[i+1]+a[i+2]+solve(i+6,j)));
}
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(int i=0; i<100010; i++)
            dp[i]=-1;
        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);
        cout<<solve(0,n)<<endl;
    }
}
