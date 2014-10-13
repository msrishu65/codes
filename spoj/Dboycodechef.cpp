#include<iostream>
#include<vector>
#include<stdio.h>
#include<algorithm>
#include<cstring>
#include<limits.h>
#include<math.h>
#define s(n) scanf("%d",&n)
#define p(n) printf("%d",n)
#define nn printf("\n");
int main()
{
    int t, n;
    s(t);

    while (t--)
    {
        s(n);
        int a[n];
        long long dp[1010];
        int ans[n];
        dp[0] = 0;

        for (int i = 0; i < n; i++)
            s(a[i]);

        for (int i = 0; i < n; i++)
            s(ans[i]);

        std::sort(ans, ans + n);

        for (int i = 1; i < 1010; i++)
        {
            dp[i] = INT_MAX;

            for (int j = 0; j < n; j++)
            {
                if (ans[j] < i && dp[i] > dp[i - ans[j]] + dp[ans[j]])
                    dp[i] =dp[i - ans[j]] + dp[ans[j]];
                else if (ans[j] == i)
                {
                    dp[i] = 1;
                    break;
                }
            }
        }

        long long x = 0;

        for (int i = 0; i < n; i++)
            x += dp[2 * a[i]];

        p(x);
        nn

    }
}
