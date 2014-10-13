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
#define R freopen("ipp","r",stdin)
#define W freopen("opp","w",stdout)
using namespace std;
int main()
{
    R;W;
    int t;
    cin>>t;
    int cc=0;
    while(t--)
    {
        cc++;
        int n;
        cin>>n;
        int x;
        cin>>x;
        int a[n+1];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int c=0;
        int i=0,j=n-1;
        while(i<=j)
        {
            if(a[i]+a[j]>x)
            {
                c++;
                j--;
            }
            else
            {
                i++;
                j--;
                c++;
            }
        }
        cout<<"Case #"<<cc<<":"<<" "<<c<<endl;
    }

}
