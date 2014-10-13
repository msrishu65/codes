#include<iostream>
#include<string>
using namespace std;
int main()
{
  string s="AGGTAB";
  string r="GXTXAYB";
  int m=s.length();
  int n=r.length();
  int l[m+1][n+1];

  for(int i=0;i<=m;i++)
  {
      for(int j=0;j<=n;j++)
      {
          if(i==0 || j==0)
            l[i][j]=0;
        else if(s[i-1]==r[j-1])
        {
            l[i][j]=1+l[i-1][j-1];
        }
        else
            l[i][j]=max(l[i][j-1],l[i-1][j]);
      }
  }
  cout<<l[m][n];

}
