#include<iostream>
using namespace std;
int main()
{
int c[3][3] = {{1, 2, 3},
              {4, 8, 2},
              {1, 5, 3}};
int a[3][3];
a[0][0]=c[0][0];
for(int i=1;i<3;i++)
a[i][0]=a[i-1][0]+c[i][0];
for(int j=1;j<3;j++)
a[0][j]=a[0][j-1]+c[0][j];
for(int i=1;i<3;i++)
{
for(int j=1;j<3;j++)
{
a[i][j]=min(a[i-1][j],min(a[i][j-1],a[i-1][j-1]))+c[i][j];
}
}

cout<<a[2][2]<<endl;

return 0;
}
