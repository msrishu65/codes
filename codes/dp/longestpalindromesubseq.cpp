#include<iostream>
using namespace std;
int main()
{
    string s="BBABCBCAB";
    int n=s.length();
    int a[n][n];
    for(int i=0;i<n;i++)
        a[i][i]=1;
        int i,l,j;
    for(l=2;l<=n;l++)
    {
        for(i=0;i<n-l+1;i++)
        {
            j=i+l-1;
              if(s[i]==s[j] && l==2)
                a[i][j]=2;
              else if(s[i]==s[j])
                a[i][j]=a[i+1][j-1]+2;
              if(s[i]!=s[j])
                a[i][j]=max(a[i][j-1],a[i+1][j]);
        }
    }
    cout<<a[0][n-1];
}
