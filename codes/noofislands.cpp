#include<iostream>
#include<vector>
using namespace std;
int dfsutil(vector<int>graph[],int i,int visited[],int parent)
{
    if(visited[i]==0)
    {
        visited[i]=1;
//        recstack[i]=1;
        for(int j=0;j<graph[i].size();j++)
        {
            if(visited[graph[i][j]]==0 )
            {
                if(dfsutil(graph,graph[i][j],visited,i))
                return 1;
             }
                else if(parent!=graph[i][j])
                    return 1;
        }
    }
//    recstack[i]=0;
    return 0;
}
int dfs(vector<int>graph[],int n)
{
    int visited[n];
    int recstack[n];
    for(int i=0;i<n;i++)
    {
        visited[i]=0;
        recstack[i]=0;
     }   //int count=0;
        //dfsutil(graph,0,visited);
    for(int i=0;i<n;i++)
    {

        if(visited[i]==0 && dfsutil(graph,i,visited,-1))
        {
            //count++;
  //          return 0;
  return 1;
            //dfsutil(graph,i,visited);
            }
    }
//    return 1;
   return 0;
}
int main()
{
//    using namespace std;
int v,e;
cin>>v>>e;
vector<int>graph[v];
int x,y;
for(int i=0;i<e;i++)
{
    cin>>x>>y;
    graph[x].push_back(y);
}
//cout<<dfs(graph,v);
if(dfs(graph,v))
    cout<<"yo";
else
    cout<<"no";
return 0;
}
