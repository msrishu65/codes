#include<iostream>
using namespace std;
int main()
{
int a[3][4]={ {1, 0, 0, 1},
              {0, 0, 1, 0},
              {0, 0, 0, 0}
            };
            int b[3][2];
            int k=0,l=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(a[i][j]==1)
                {
                    b[k][l]=i;
                    b[k][l+1]=j;
                    k++;
                }
        }
    }
for(int i=0;i<3;i++)
{
   int k=b[i][0];
   for(int d=0;d<4;d++)
    a[k][d]=1;
}
for(int i=0;i<3;i++)
{
    int k=b[i][1];
    for(int d=0;d<3;d++)
        a[d][k]=1;
}
for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
