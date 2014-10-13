#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void dfsvisit(vector<int>graph[],int i,int visited[])
{
    cout<<i<<"->";
    visited[i]=1;
    for(int j=0;j<graph[i].size();j++)
    {
        if(visited[graph[i][j]]==0)
            dfsvisit(graph,graph[i][j],visited);
    }
}
void dfs(vector<int>graph[],int s,int v)
{
int visited[v];
for(int i=0;i<v;i++)
    visited[i]=0;
dfsvisit(graph,s,visited);
}
int main()
{
    int v,e;
    cin>>v>>e;
    vector<int>graph[v];
    int x,y;
    for(int i=0;i<e;i++)
    {
        cin>>x>>y;
        graph[x].push_back(y);
    }
    int s;
    cin>>s;
    dfs(graph,s,v);
/*    queue<int>q;
    int s=graph[0][1];
    q.push(s);
//    vector<int>::iterator i;
int visited[v];
for(int i=0;i<v;i++)
    visited[i]=0;
    visited[s]=1;
    while(!q.empty())
    {
        int d=q.front();
        q.pop();
        cout<<d<<"->";
        for(int i=0;i<graph[d].size();i++)
        {
            if(visited[graph[d][i]]==0)
            {
              visited[graph[d][i]]=1;
              q.push(graph[d][i]);
            }
        }
    }*/
}
