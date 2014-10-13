#include<iostream>
#include<stdio.h>
using namespace std;
int a[100010];
long long s[100010];
long long dp[100010];
long long ans[100010];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);

    s[0]=a[0];
    dp[0]=a[0]*a[0];
    ans[0]=dp[0];

    for(int i=1; i<n; i++)
    {
        s[i]=s[i-1]+a[i];
        dp[i]=s[i]*a[i];
        ans[i]=ans[i-1]+dp[i];
    }
//    for(int i=0; i<n; i++)
  //      cout<<s[i]<<" "<<dp[i]<<endl;
    int m,x,y;
    cin>>m;
    while(m--)
    {
        scanf("%d",&x);
        scanf("%d",&y);
        if(x==0)
            printf("%lld\n",ans[y]);
        else
            printf("%lld\n",ans[y]-ans[x-1]-(s[x-1]*(s[y]-s[x-1])));
    }
}
