#include<bits/stdc++.h>
#define S second
#define F first
#define ii pair<int,int>
using namespace std;
int num(string str)
{
    int a=0;
    for(int i=0;i<str.size();i++)
    {
        a*=10;
        a+=str[i]-'0';
    }
    return a;
}
ii fun(string str)
{
    int in=str.find(',');
    string l=str.substr(0,in);
    string r=str.substr(in+1);
    return make_pair(num(l),num(r));
}
map<int,int> sn;
map<int,int> ld;
vector<int> dp;
vector<int> mark;
int arr[101];
int ff(int in)
{

    mark[in]=1;
    cout<<in<<endl;
    if(dp[in]!=-1)return dp[in];

    if(ld.find(in)!=ld.end())return dp[in]=ff(ld[in]);
    if(sn.find(in)!=sn.end())return dp[in]=ff(sn[in]);
    if(in==100)return 0;
    int ans=1000;
    for(int i=1;i<=6 && (in+i<=100);i++)
    {
        if(!mark[in+i])
        {
            if(ff(in+i)+1<ans)arr[in]=i;
        }
    }
    return dp[in]=ans;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        sn.clear();ld.clear();
        dp.clear();dp.resize(101,-1);
        mark.clear();mark.resize(101,0);
        string str;cin>>str;
        ii ab=fun(str);
        int x=ab.F,y=ab.S;
        cout<<x<<" "<<y<<endl;
        for(int i=0;i<x;i++)
        {
            cin>>str;
            ab=fun(str);
            ld[ab.F]=ab.S;
        }
        for(int i=0;i<y;i++)
        {
            cin>>str;
            ab=fun(str);
            sn[ab.F]=ab.S;
        }
        for(int i=0;i<101;i++){arr[i]=0;}
        cout<<ff(1)<<endl;
        for(int i=1;i<=100;i++)cout<<arr[i]<<" ";
        cout<<endl;
    }
}
