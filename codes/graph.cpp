#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int fact[333];
void fun()
{
    fact[0]=1;
    for(int i=1;i<333;i++)fact[i]=(1LL*fact[i-1]*i)%mod;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int> vv(n);
        for(int i=0;i<n;i++)cin>>vv[i];
        int ans=1;
        fun();
        for(int i=0;i<n;i++)ans=(1LL*ans*fact[vv[i]-1])%mod;

        int sum=0;
        for(int i=0;i<n;i++)sum+=vv[i];
        for(int i=0;i<n-1;i++)
        {
            ans=(1LL*ans*vv[i])%mod;
            ans=(1LL*ans*(sum-vv[i]))%mod;
        }
        cout<<endl<<ans<<endl<<endl;
    }
}
