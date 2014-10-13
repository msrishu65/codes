#include<iostream>
using namespace std;
int main()
{
int a[3][3]= { {1, 2, 3},
               {4, 8, 2},
               {1, 5, 3}
             };
int m[3][3];
m[0][0]=a[0][0];
for(int i=1;i<3;i++)
    m[i][0]=m[i-1][0]+a[i][0];
for(int j=1;j<3;j++)
        m[0][j]=m[0][j-1]+a[0][j];
        int x,y;
cin>>x>>y;
for(int i=1;i<=x;i++)
{
    for(int j=1;j<=y;j++)
    {
        m[i][j]=min(m[i-1][j],min(m[i][j-1],m[i-1][j-1]))+a[i][j];
    }
}
cout<<m[x][y];

}
