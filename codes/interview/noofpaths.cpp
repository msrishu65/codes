#include<iostream>
using namespace std;
int findpaths(int i,int j)
{
    if(i==0 && j==0)
        return 0;
        if(i==0)
            return 1;
        if(j==0)
            return 1;
        return findpaths(i-1,j)+findpaths(i,j-1);
}
int main()
{

int i,j;
cin>>i>>j;
int a[i+1][j+1];
a[0][0]=0;
//    cout<<findpaths(i,j);
for(int k=1;k<=j;k++)
a[0][k]=1;
for(int k=1;k<=i;k++)
    a[k][0]=1;
    for(int k=1;k<=i;k++)
    {
      for(int l=1;l<=j;l++)
        a[k][l]=a[k-1][l]+a[k][l-1];
     }
    cout<<a[i][j];
}
