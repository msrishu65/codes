#include<iostream>
using namespace std;
void printspiral(int a[3][6],int start,int row,int column)
{
    if(row-start<1 ||column-start<1)
    {
        return ;
    }
    if(row-start==1)
    {
        for(int i=start;i<column;i++)
        cout<<a[start][i]<<" ";
    return;
    }
    if(row-column==1)
    {
    for(int j=start+1;j<row;j++)
        cout<<a[j][column-1]<<" ";
    return;
    }
    int i,j;
    for(int i=start;i<column;i++)
        cout<<a[start][i]<<" ";
    for(int j=start+1;j<row;j++)
        cout<<a[j][column-1]<<" ";
    for(int i=column-2;i>=start;i--)
        cout<<a[row-1][i]<<" ";
    for(int j=row-2;j>start;j--)
        cout<<a[j][start]<<" ";
        printspiral(a,start+1,row-1,column-1);
}
int main()
{

int a[4][6]= { {1,  2,  3,  4,  5,  6},
             {7,  8,  9,  10, 11, 12},
             {13, 14, 15, 16, 17, 18},
             {19, 20, 21, 22, 23, 24,}
           };
           printspiral(a,0,4,6);
    /*       int i=0,j=0,k,m=3,n=6;
           while(i<m && j<n)
           {
               for(int k=j;k<n;k++)
                cout<<a[i][k]<<" ";
                i++;
                for(int k=i;k<m;k++)
                    cout<<a[k][n-1]<<" ";
                n--;
                if(i<m)
                {
                for(int k=n-1;k>=j;k--)
                    cout<<a[m-1][k]<<" ";
                m--;
                }
                if(j<n)
                {
                for(int k=m-1;k>=i;k--)
                cout<<a[k][j]<<" ";
                j++;
                }
           }*/

          return 0;
}
