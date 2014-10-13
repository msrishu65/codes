#include<iostream>
#include<stdio.h>
using namespace std;
int a[501][501],b[501][501];
int main()
{
    int t,r,c;
    cin>>t;
    while(t--)
    {
        cin>>r>>c;
        for(int i=0; i<r; i++)
            for(int j=0; j<c; j++)
                cin>>a[i][j];
                for(int i=c-2;i>=0;i--)
                {
                a[r-1][i]=a[r-1][i+1]-a[r-1][i];
                if(a[r-1][i]<0)
                a[r-1][i]=0;
                }
                for(int j=r-2;j>=0;j--)
                {
                a[j][c-1]=a[j+1][c-1]-a[j][c-1];
                //cout<<a[c-1][j]<<endl;
                if(a[j][c-1]<0)
                a[j][c-1]=0;
                }
                for(int i=r-2;i>=0;i--)
                {
                for(int j=c-2;j>=0;j--)
                {
                a[i][j]=min(a[i][j+1],a[i+1][j])-a[i][j];
                if(a[i][j]<0)
                a[i][j]=0;
                }
                }
/*                for(int i=0;i<r;i++)
                {
                for(int j=0;j<c;j++)
                cout<<a[i][j]<<" ";
                cout<<endl;
                }*/
                cout<<a[0][0]+1<<endl;
    }
}
