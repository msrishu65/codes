#include<iostream>
#include<stdio.h>
using namespace std;
int a[1000001];
long long b[1000001];
int main()
{
    int t,n;
    scanf("%d",&t);

    while(t--)
    {
    long long sum=0,s=0;
        scanf("%d",&n);

        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);
        for(int i=n-1; i>=0; i--)
        {
            s=s+a[i];
            if(s<0)
            {
                s=0;
                b[i]=2;
            }
            else
                b[i]=0;
        }
        b[0]=1;
        for(int i=1; i<n; i++)
        {
            if(b[i]!=2)
            {
                b[i]=b[i-1]+1;
            }
        }

        for(int i=0; i<n; i++)
            sum+=a[i]*b[i];
        printf("%lld\n",sum);
    }
}
