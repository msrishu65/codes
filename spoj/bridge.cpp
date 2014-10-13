#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
struct pairs
{
    int a;
    int b;
};
pairs bridge[1004];
 int dp[1004];
int compare(pairs x,pairs y)
{
    if(x.a<y.a)
        return 1;
    else if(x.a==y.a)
    {
        if(x.b<=y.b)
            return 1;
    }
        return 0;
}
int main()
{
     //freopen("new.txt","r",stdin);
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;

        for(int i=0; i<n; i++)
            cin>>bridge[i].a;
        for(int i=0; i<n; i++)
            cin>>bridge[i].b;
        sort(bridge,bridge+n,compare);
        for(int i=0; i<n; i++)
            dp[i]=1;
        int m=1;
        for(int i=1; i<n; i++)
        {
            for(int j=0; j<i; j++)
            {
                if((bridge[j].a-bridge[i].a)*(bridge[j].b-bridge[i].b)>=0 && dp[i]<dp[j]+1)
                    dp[i]=dp[j]+1;
            }
            if(m<dp[i])
                m=dp[i];
        }
        cout<<m<<endl;
    }
}
