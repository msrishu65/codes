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
using namespace std;
int main()
{
string s="";
int n;
cin>>n;
while(n--)
{
char c;
cin>>c;
s=s+c;
}
//cout<<s<<endl;
n=s.length();
int start=-1;
int end=-1;
int i=0;
while(s[i]=='a' && i<n)
    i++;
if(i<n)
start=i;
while(s[i]=='b')
    i++;
if(i<n)
    end=i;
    int c=0;
    int m=1;
for(int j=i+1;j<n;j++)
{
    if(s[j]=='a')
        c++;
    else
        c=0;
    if(c>=m)
    {

  //      cout<<j<<" "<<s[j]<<endl;
        //cout<<m<<" "<<c<<endl;
        m=c;
        end=j;
    }
//    cout<<s[j]<<endl;

}
if(start!=-1 && end!=-1)
cout<<start<<" "<<end;
else
    cout<<"0"<<" "<<"0";
}
