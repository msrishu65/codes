#include<iostream>
#include<vector>
#include<Stack>
#include<fstream>
using namespace std;
vector<int>graph[6];
void topological(int i,stack<int> &s,int visited[])
{
    visited[i]=1;
    for(int j=0;j<graph[i].size();j++)
    {
        if(visited[graph[i][j]]==0)
        topological(graph[i][j],s,visited);
    }
    cout<<i<<" finished\n";
    s.push(i);
}
void topologysort()
{
    stack<int>s;
    int visited[6];
    for(int i=0;i<6;i++)
        visited[i]=0;
    for(int i=0;i<6;i++)
    {
        if(visited[i]==0)
        topological(i,s,visited);
    }
    /*if(s.empty())
        cout<<"Yo";*/
    while(!s.empty())
    {
        int t=s.top();
        cout<<t<<"->";
        s.pop();
    }
}
int main()
{
freopen("input.txt","r",stdin);
int e;
cin>>e;
int x,y;
for(int i=0;i<e;i++)
{
    cin>>x>>y;
    graph[x].push_back(y);
}
topologysort();
}
