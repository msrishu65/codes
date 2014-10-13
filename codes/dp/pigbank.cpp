#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
              int e,f,tar,i,j;

              cin>>e>>f;
              tar=f-e;
              int n;
              cin>>n;

              int cost[n],weight[n];

              for(i=0;i<n;i++)
              {
                  cin>>cost[i];
                  cin>>weight[i];
              }
              int dp[tar+1];
              for(i=0;i<=tar;i++)
              dp[i]=INT_MAX;
              dp[0]=0;
              for(i=1;i<=tar;i++)
              {
                     for(j=0;j<n;j++)
                     {

                                if(weight[j]<=i && dp[i-weight[j]]!=INT_MAX && dp[i]>dp[i-weight[j]]+cost[j])
                                     dp[i]=dp[i-weight[j]]+cost[j];
                     }
              }
              if(dp[tar]==INT_MAX)
                cout<<"This is impossible."<<endl;
              else
                   cout<<"The minimum amount of money in the piggy-bank is "<<dp[tar]<<"."<<endl;

    }
    return 0;
}

