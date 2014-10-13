#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    string s="ababbbabbababa";
    int n=s.length();
    int c[n][n];
    int p[n][n];
    for(int i=0;i<n;i++)
    {
        p[i][i]=1;
        c[i][i]=0;
    }
    int i,j,k,l;
    for(l=2;l<=n;l++)
    {
        for(i=0;i<n-l+1;i++)
        {
            j=i+l-1;
            if(l==2)
            p[i][j]=(s[i]==s[j]);
            else
                p[i][j]=(s[i]==s[j]) && p[i+1][j-1];
            if(p[i][j])
                c[i][j]=0;
            else
            {
                c[i][j]=INT_MAX;
                for(k=i;k<=j-1;k++)
                {
                    c[i][j]=min(c[i][j],c[i][k]+c[k+1][j]+1);
                }
            }
        }
    }
    cout<<c[0][n-1];
}
