#include<iostream>
using namespace std;
int main()
{
int i,j,k;
char a[9];
int n=9;
int l[100][100];
for(i=0;i<9;i++)cin>>a[i];
for(i=0;i<9;i++)
{
l[i][i]=1;
}
for(i=2;i<=n;i++)
{
  for(j=0;j<n-i+1;j++)
  {
      k=i+j-1;
    if(a[j]==a[k] && i==2)
       l[j][k]=2;
    else if(a[j]==a[k])
       l[j][k]=2+l[j+1][k-1];
    else
       l[j][k]=max(l[j+1][k],l[j][k-1]);
  }
}
cout<<l[0][8];
return 0;
}
