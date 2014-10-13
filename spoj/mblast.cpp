#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<cstring>
using namespace std;
int dp[2001][2001];
char a[2001],b[2001];
int solve(char *a,char *b,int m,int n,int k)
{
    if(m<0 && n<0)
        return 0;
    if(m<0)
        return (n+1)*k;
    if(n<0)
        return (m+1)*k;
    if(dp[m][n]!=-1)
        return dp[m][n];
    else return dp[m][n]=min(abs(a[m]-b[n])+solve(a,b,m-1,n-1,k),min(solve(a,b,m-1,n,k)+k,solve(a,b,m,n-1,k)+k));
}
int main()
{

    int k;
    gets(a);
    gets(b);
    scanf("%d",&k);
    int m=strlen(a);
    int n=strlen(b);
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            dp[i][j]=-1;
    int ans=solve(a,b,m-1,n-1,k);
    printf("%d\n",ans);
}
