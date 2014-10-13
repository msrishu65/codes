#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
int p[]={40, 20, 30, 10, 30};
int m[5][5];
for(int i=1;i<5;i++)
    m[i][i]=0;
int n=5;
int i,j,k,q;
for(int l=2;l<n;l++)
{
    for(i=1;i<=n-l+1;i++)
    {
        j=i+l-1;
        m[i][j]=INT_MAX;
        for(k=i;k<=j-1;k++)
        {
            q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
            if(q<m[i][j])
                m[i][j]=q;
          //m[i][j]=min(m[i][j],m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j]);
        }
    }
}
for(int i=0;i<5;i++)
    for(int j=0;j<5;j++)
    cout<<m[i][j]<<endl;

}
