#include<iostream>
#include<stdlib.h>
using namespace std;
int a[10][10],dp[10][10];
int n;
int main()
{
cin>>n;
for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
     cin>>a[i][j];
dp[0][0]=1;
int m=1;
for(int j=1;j<n;j++)
{
    if(abs(a[0][j]-a[0][j-1])<=1)
        dp[0][j]=dp[0][j-1]+1;
    else
        dp[0][j]=1;
        m=max(m,dp[0][j]);
}
for(int i=1;i<n;i++)
{
    if(abs(a[i][0]-a[i-1][0])<=1)
        dp[i][0]=dp[i-1][0]+1;
    else
        dp[i][0]=1;
        m=max(m,dp[i][0]);
}
for(int i=1;i<n;i++)
{
    for(int j=1;j<n;j++)
    {
        int a1=1,a2=1;
        if(abs(a[i][j]-a[i][j-1])<=1)
            a1+=dp[i][j-1];
        if(abs(a[i][j]-a[i-1][j])<=1)
            a2+=dp[i-1][j];
            dp[i][j]=max(a1,a2);
            if(dp[i][j]>m)
                m=dp[i][j];
    }
}
cout<<m;
}
