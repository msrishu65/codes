#include<iostream>
#include<stdio.h>
#define mod 1000000009
using namespace std;
int main()
{
    int t,n,m,y;
    char x;
    scanf("%d",&t);
    while(t--)
    {

        scanf("%d",&n);
        scanf("%d",&m);
        int a[n+1],b[n+1];
        for(int i=0; i<=n; i++)
            a[i]=0;
        for(int i=0; i<m; i++)
        {

            getchar();
            scanf("%c%d",&x,&y);
            a[y]=x;
        }
        long long s=1;
        int prev;
        for(int i=0; i<n; i++)
        {
            if(a[i]!=0)
            {
                prev=i;
                break;
            }
        }
        int i=prev+1;
        while(i<=n)
        {
            if(a[i]!=0)
            {
                if(a[i]!=a[prev])
                    s=(s*(i-prev))%mod;
                prev=i;
            }
            i++;
        }
        s=s%mod;
        printf("%lld",s);
        printf("\n");
    }
}
