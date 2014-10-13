#include<iostream>
#include<vector>
using namespace std;
int detectcycle(vector<int>graph[],int i,int visited[])
{
    if(visited[i]==1)
        return 1;
        visited[i]=1;
        int c;
    for(int j=0;j<graph[i].size();j++)
    {
        if(visited[graph[i][j]]!=1)
        {
            visited[graph[i][j]]=1;
             c=detectcycle(graph,graph[i][j],visited);
        }
        visited[graph[i][j]]=2;
    }
    return c;
}
int iscyclic(vector<int>graph[],int v)
{
    int visited[v];
    for(int i=0;i<v;i++)
        visited[i]=0;
    //for(int i=0;i<v;i++)
        if(detectcycle(graph,0,visited))
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
    if(iscyclic(graph,v))
        cout<<"yo";
    else
    cout<<"no";
}
