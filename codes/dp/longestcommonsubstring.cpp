#include<iostream>
#include<cstring>
using namespace std;
int main()
{
string s="geeksfor";
string r="geeksquiz";
int a[8][9];
int res=0;
for(int i=0;i<8;i++)
{
    for(int j=0;j<9;j++)
    {
        if(i==0||j==0)
            a[i][j]=0;
        else if( s[i-1]==r[j-1])
        {
            a[i][j]=1+a[i-1][j-1];
            res=max(res,a[i][j]);
        }
        else
            a[i][j]=0;
}
}
cout<<res;
}
