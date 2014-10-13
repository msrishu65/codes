#include<iostream>
using namespace std;
int main()
{
int c[100][100];
int n,k;
cin>>n>>k;
c[0][0]=1;
for(int i=1;i<=n;i++)
{
for(int k=0;k<=i;k++)
{
if(k==0)
c[i][k]=1;
else
c[i][k]=c[i-1][k]+c[i-1][k-1];
}
}

cout<<endl<<c[n][k];
return 0;
}
