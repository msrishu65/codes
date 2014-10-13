#include<iostream>
#define mod 1000000007
using namespace std;
long long a[510][510];
int main()
{
    int t,m,n;
    cin>>t;
    while(t--)
    {
        cin>>m>>n;
        a[0][0]=1;
        a[1][0]=1;
        a[0][1]=1;
        for(int i=2;i<m;i++)
            a[i][0]=(a[i-1][0]+2*a[i-2][0])%mod;
            for(int i=2;i<n;i++)
                a[0][i]=(a[0][i-1]+2*a[0][i-2])%mod;
            for(int i=1;i<m;i++)
            {
                for(int j=1;j<n;j++)
                    a[i][j]=((a[i-1][j]+a[i][j-1])%mod+((i-2>=0?2*a[i-2][j]:0)+(j-2>=0?2*a[i][j-2]:0))%mod)%mod;
            }
            cout<<a[m-1][n-1]<<endl;
    }

}
