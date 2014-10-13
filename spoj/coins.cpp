#include<iostream>
using namespace std;
long long dp[20001];
long long coins(long long n)
{
    if(n<12)
        return n;
    if(n<20001&&dp[n]!=-1)
        return dp[n];
    else if(n<20001)
        return dp[n]=max(n,coins(n/2)+coins(n/3)+coins(n/4));
    else
        return max(n,coins(n/2)+coins(n/3)+coins(n/4));
}
int main()
{
long long n;
for(int i=0;i<20001;i++)
    dp[i]=-1;
while(cin>>n)
{
    cout<<coins(n)<<endl;
}
}
