#include<iostream>
#include<limits.h>
using namespace std;
int a[101];
long long m[101][101];
long long c[101][101];
int main()
{
    int n;
    while(cin>>n)
    {
        for(int i=0; i<n; i++)
            {
            cin>>a[i];
            c[i][i]=a[i];
            }
        for(int i=0; i<n; i++)
        {
            m[i][i]=0;
        }
        for(int l=2; l<=n; l++)
        {
            for(int i=0; i<n-l+1; i++)
            {
                int j=i+l-1;
                m[i][j]=INT_MAX;
                for(int k=i; k<j; k++)
                {
                    int q=m[i][k]+m[k+1][j]+c[i][k]*c[k+1][j];
                    if(q<m[i][j])
                    {
                    m[i][j]=q;
                    c[i][j]=(c[i][k]+c[k+1][j])%100;
                    }
                }
            }
        }
        cout<<m[0][n-1]<<endl;
    }
}
