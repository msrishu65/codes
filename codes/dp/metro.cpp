#include<iostream>
#include<math.h>
using namespace std;
/*int isina(int a[111][2],int x,int y)
{
    for(int i=0;i<111;i++)
    {
        if(a[i][0]==x && a[i][1]=)
    }
}*/
int main()
{
int a[111][2];
int m,n;
cin>>m>>n;
int k;
cin>>k;
for(int i=0;i<k;i++)
{
for(int j=0;j<2;j++)
{
cin>>a[i][j];
}
}
float c[m+1][n+1];
c[0][0]=0;
for(int i=1;i<=n;i++)
{
    c[0][i]=c[0][i-1]+100;
}
int f=0;
for(int i=1;i<=m;i++)
{
    c[i][0]=c[i-1][0]+100;
}
for(int i=1;i<=m;i++)
{
    for(int j=1;j<=n;j++)
    {
        if(i==a[f][0] && j== a[f][1])
            {
                c[i][j]=c[i-1][j-1]+(sqrt(2)*100);

                f++;
            }
        else
        {
            c[i][j]=min(c[i-1][j]+100,c[i][j-1]+100);
        }
    }
}
int ans=c[m][n]+0.5;
cout<<ans;


}
