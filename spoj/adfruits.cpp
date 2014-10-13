#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<cstring>
using namespace std;
int a[101][101],b[101][101];
char s1[101],s2[101];
int main()
{
    //freopen("in.txt","r",stdin);
    while(scanf("%s%s",&s1,&s2)==2)
    {
        int n1=strlen(s1);
        int n2=strlen(s2);
        for(int i=0; i<=n1; i++)
        {
            for(int j=0; j<=n2; j++)
            {
                if(i==0 || j==0)
                {
                    a[i][j]=0;
                    b[i][j]=0;
                }
                else if(s1[i-1]==s2[j-1])
                {
                    a[i][j]=1+a[i-1][j-1];
                    b[i][j]=1;
                }
                else if(a[i-1][j]>=a[i][j-1])
                {
                    b[i][j]=2;
                    a[i][j]=a[i-1][j];
                }
                else
                {
                    a[i][j]=a[i][j-1];
                    b[i][j]=3;
                }
            }
        }
/*        for(int i=0; i<=n1; i++)
        {
            for(int j=0; j<=n2; j++)
            {
                cout<<b[i][j]<<" ";
            }
            cout<<endl;
        }*/
        string r="";
        int i=n1,j=n2;
        while(1)
        {
            if(b[i][j]==0)
            {
                break;
            }
            if(b[i][j]==2)
            {
                r=r+s1[i-1];
                i--;
            }
            else if(b[i][j]==1)
            {
                r=r+s1[i-1];
                i--;
                j--;
            }
            else
            {
                r=r+s2[j-1];
                j--;
            }
        }
        while(i>0)
        {
            r=r+s1[i-1];
            i--;
        }
        while(j>0)
        {
            r=r+s2[j-1];
            j--;
        }
        reverse(r.begin(),r.end());
        cout<<r;
    }
}
