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
#define li list<int>::iterator
using namespace std;

int main()
{
    list<int>q;
    map<int,list<int>::iterator> hash;
    map<int,int>valid;
    int cs;
    cin>>cs;
    int n;
    while(1)
    {
        cout<<"enter page no you handsome";
        cin>>n;
        if(n==-1)
            break;
        if(q.size()<cs)
        {

             li i=hash[n];
            if(i)
            {
             hash.erase(i);
            }
            q.push_front(n);
            hash[n]=q.begin();
        }
        else
        {
               li i=hash[n];
            if(i)
            {
             hash.erase(i);
            }
            else
            {
                q.erase(q.rbegin());
            }
            q.push_front(n);
            hash[n]=q.begin();
        }
    }

}
