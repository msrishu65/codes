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
#define W freopen("oput","w",stdout)
using namespace std;

int main()
{
    R;W;
int t,c,i;
cin>>t;
int hash[1001];
for(int j=0;j<1001;j++)
    hash[j]=-1;
int h=1;
while(h<=t)
{
    cin>>c;
    cin>>i;
    int a[i+1];
    for(int j=1;j<=i;j++)
    {
        cin>>a[j];
        hash[a[j]]=j;
    }
    for(int j=1;j<=i;j++)
    {
        if(a[j]<=c && hash[c-a[j]]!=-1 && j!=hash[c-a[j]])
        {
            cout<<"Case #"<<h<<":"<<" "<<j<<" "<<hash[c-a[j]]<<endl;
            break;
        }
    }
    for(int j=0;j<1001;j++)
    hash[j]=-1;
    h++;
}
}
