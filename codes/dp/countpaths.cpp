#include<iostream>
using namespace std;
int countpaths(int m,int n)
{
if(m==1||n==1)
return 1;
return countpaths(m-1,n)+countpaths(m,n-1);

}
int main()
{
int m=3,n=3;
int a[m][n];
for(int i=0;i<m;i++)
{
    a[i][0]=1;

}
for(int i=0;i<n;i++)
{
    a[0][i]=1;
}
for(int i=1;i<m;i++)
{
    for(int j=1;j<n;j++)
    {
        a[i][j]=a[i][j-1]+a[i-1][j];
    }
}
cout<<a[2][2];
//cout<<countpaths(m,n);

}
