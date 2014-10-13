#include<iostream>
using namespace std;
int a[2010];
int m[2010][2010];
int maxit(int i,int j,int c)
{
if(i>j)
return 0;
if(m[i][j]!=-1)
return m[i][j];
else
return m[i][j]=max(c*a[i]+maxit(i+1,j,c+1),c*a[j]+maxit(i,j-1,c+1));
}
int main()
{
int n;
cin>>n;
for(int i=0;i<2010;i++)
for(int j=0;j<2010;j++)
m[i][j]=-1;
for(int i=0;i<n;i++)
cin>>a[i];
cout<<maxit(0,n-1,1);
}
