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
void dfsearch(vector< list<int> >graph,int s,int b[])
{
    b[s]=1;
    cout<<s<<"->";
    vector<list<int> >::iterator i;
    for(i=graph[s].begin();i<graph[s].end();i++)
    {
        if(!b[graph[i])
        {
            dfsearch(graph,i,b);
        }
    }
}
void dfs(vector<list<int> >graph,int s,int e)
{
    int b[e];
    for(int i=0;i<e;i++)
        b[i]=0;
    dfsearch(graph,s,b);
}
int main()
{
vector<list<int> >graph;
int v,e;
cin>>v>>e;
int i=0;
vector<list<int> >graph[v];
int x,y;
while(i<e)
{
    cin>>x>>y;
    graph[x].push_back[y];
    i++;
}
int s;
cin>>s;
dfs(graph,s,e);
}
