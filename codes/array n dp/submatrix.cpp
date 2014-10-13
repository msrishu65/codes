#include<iostream>
using namespace std;
int main()
{
int a[6][5]= {{0, 1, 1, 0, 1},
           {1, 1, 0, 1, 0},
           {0, 1, 1, 1, 0},
           {1, 1, 1, 1, 0},
           {1, 1, 1, 1, 1},
           {0, 0, 0, 0, 0}};
int s[6][5];
for(int i=0;i<6;i++)
{
s[i][0]=a[i][0];
}
for(int j=0;j<5;j++)
{
s[0][j]=a[0][j];
}
for(int i=1;i<6;i++)
{
for(int j=1;j<5;j++)
{
if(a[i][j]==1)
{
s[i][j]=min(s[i][j-1],min(s[i-1][j],s[i-1][j-1]))+1;
}
else s[i][j]=0;
}
}
int maxs=0,maxi=0,maxj=0;
for(int i=0;i<6;i++)
{
for(int j=0;j<5;j++)
{
    if(s[i][j]>maxs)
    {
        maxs=s[i][j];
        maxi=i;
        maxj=j;
    }
}
}
for(int i=maxi;i>maxi-maxs;i--)
{
    for(int j=maxj;j>maxj-maxs;j--)
    {
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}
