#include<iostream>
#include<bits/stdc++.h>
#include<climits>
#include<stdio.h>
#define LL long long
using namespace std;
LL dp[20001];
LL maxsum(int n)
{
    if(n<20001 && dp[n]!=-1)return dp[n];
    if(n<12)
    {
        return dp[n]=n;
    }
    if(n<20001) return dp[n]=max((LL)n,maxsum(n/2)+maxsum(n/3)+maxsum(n/4));
    else return max((LL)n,maxsum(n/2)+maxsum(n/3)+maxsum(n/4));
}
int main()
{
    int n;
    memset(dp,-1,sizeof(dp));
    while(cin>>n)
    {

        printf("%lld\n",maxsum(n));
    }
    return 0;
}

