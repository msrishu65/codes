#include<bits/stdc++.h>
using namespace std;
#define F(i,n) for(int i=0;i<n;++i)
#define F1(i,n) for(int i=1;i<=n;++i)
const int MAXNODES=100;
//number of nodes
int n;

vector<int> E[MAXNODES];

class cmp{
public:
    const bool operator () (const &pair<int,int> a, const &pair<int,int>) const
};
void Prim(){
    vector<bool> visited(n,false);
    priority_queue< pair<int,int> , vector< pair<int,int> >, cmp > Q;
}
int main(){
    cin>>n;
    int m;cin>>m;
    F(i,m){
        int a,b;cin>>a>>b;
        E[a].push_back(b);
        E[b].push_back(a);
    }
    Prim();
}
