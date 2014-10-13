#include<iostream>
#include<vector>
using namespace std;
int searchcycle(vector<int>graph[],int i,int visited[])
{
    if(visited[i]==1)
        return 0;
        visited[i]=1;
        int c;
        for(int j=0;j<graph[i].size();j++)
        {
    if(visited[graph[i][j]]==0)
    {
        c=searchcycle(graph,graph[i][j],visited);
    }
        }
        visited[i]=2;
        return c;
}
int detectcycle(vector<int>graph[],int n)
{
    int visited[n];
    for(int i=0;i<n;i++)
        visited[i]=0;
    if(searchcycle(graph,0,visited))
        return 1;
    return 0;
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
    if(detectcycle(graph,v))
        cout<<"YO";
    else
        cout<<"no";
}
