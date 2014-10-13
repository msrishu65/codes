#include <iostream>
#include <cstdio>
#include <climits>
#include <algorithm>
#include <queue>
#include <cstring>
#include <cmath>
#include <vector>
#include <list>
#include <stack>
#include <bitset>
#include <string>
#include <stack>
#include <set>
#include <map>
#include <string>
#include <deque>
#include <ctime>
#define s(n) scanf("%d",&n)
#define s2(a,b) scanf("d",&a,&b)
#define SET(p)      memset(p,-1,sizeof(p))
#define CLR(p)      memset(p,0,sizeof(p))
#define vi vector<int>
#define ii pair<int,int>
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define LL long long
#define ULL unsigned long long
#define R freopen("in","r",stdin)
#define W freopen("out","w",stdout)
using namespace std;
int searchpath(int a[][4],int m,int n,int sets[][n],int x,int y)
{
    if(x<0 || y<0 || x>m || y>n || a[x][y]==0)
        return 0;
    if(a[x][y]==9)
        return 1;
        if(sets[x][y]==0)
            return 0;
        sets[x][y]=0;
        int dx[]={-1,-1,-1,0,1,1,1,0};
        int dy[]={-1,0,1,1,1,0,-1,-1};
        for(int i=0;i<8;i++)
        {
            if(searchpath(a,m,n,sets,x+dx[i],y+dy[i]))
                return 1;
        }
        return 0;
/*    if(searchpath(a,set,m,n,x-1,y-1) || searchpath(a,set,m,n,x-1,y)
       || searchpath(a,set,m,n,x-1,y+1) ||searchpath(a,set,m,n,x,y+1)
       || searchpath(a,set,m,n,x+1,y+1) ||searchpath(a,set,m,n,x+1,y)
       ||searchpath(a,set,m,n,x+1,y-1)||searchpath(a,set,m,n,x,y-1))
        return 1;*/
}
int ispath(int a[4][4],int m,int n,int x,int y)
{
    int sets[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            sets[i][j]=-1;
    }
    int f=searchpath(a,m,n,sets,x,y);
}
int main()
{
int a[4][4]={
               {1,0,1,9},
               {1,0,0,1},
               {0,1,0,1},
               {1,0,1,0}
            };
           // int set[4][4];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
            set[i][j]=-1;
    }
            if(ispath(a,4,4,0,0))
                cout<<"yes";
            else
            cout<<"no";
}
