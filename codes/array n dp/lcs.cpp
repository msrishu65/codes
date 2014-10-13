#include<iostream>
using namespace std;
int main()
{
  char X[] = "AGGTAB";
  char Y[] = "GXTXAYB";
  int l[6][7];
for(int i=0;i<6;i++)
{
for(int j=0;j<7;j++)
{
if(i==0||j==0)
l[i][j]=0;
else if(X[i-1]==Y[j-1])
l[i][j]=1+l[i-1][j-1];
else
l[i][j]=max(l[i-1][j],l[i][j-1]);
}
}
cout<<l[5][6];

}
