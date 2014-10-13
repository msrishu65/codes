/*
  Aditya Gourav
  @adi.pearl
*/
#include<bits/stdc++.h>
using namespace std;

//scanning
#define si(x) scanf("%d",&x)
#define ss(x) scanf("%s",x)
#define ssWSP(x) scanf(" %[^\r\n]",x)
#define sill(x) scanf("%lld",&x)
#define sd(x) scanf("%lf",&x)

//debugging
#define db1(x) cerr<<(x)<<endl;
#define db2(x,y) cerr<<(x)<<" "<<(y)<<endl;
#define db3(x,y,z) cerr<<(x)<<" "<<(y)<<" "<<(z)<<endl;
#define db4(x,y,z,z2) cerr<<(x)<<" "<<(y)<<" "<<(z)<<" "<<(z2)<<endl;
#define db5(x,y,z,z2,z3) cerr<<(x)<<" "<<(y)<<" "<<(z)<<" "<<(z2)<<" "<<(z3)<<endl;
#define db6(x,y,z,z2,z3,z4) cerr<<(x)<<" "<<(y)<<" "<<(z)<<" "<<(z2)<<" "<<(z3)<<" "<<(z4)<<endl;
#define db7(x,y,z,z2,z3,z4,z5) cerr<<(x)<<" "<<(y)<<" "<<(z)<<" "<<(z2)<<" "<<(z3)<<" "<<(z4)<<" "(z5)<<endl;

//printing to console
#define pi(x) printf("%d\n",x)
#define pill(x) printf("%lld\n",x)
#define pd(x) printf("%lf\n",x)
//others
#define FI(var,beg,end) for(int var=(beg);var<=(end);++var)
#define FIA(var,beg,end,inc) for(int var=(beg);var<=(end);var+=(inc))
#define FD(var,end,beg) for(int var=(end);var>=(beg);--var)
#define F(i,n) FI(i,0,n-1)
#define F1(i,n) FI(i,1,n)
#define FOR(it,v) for(it = v.begin(); it != v.end(); ++it)
#define SZ(x) ((int)((x).size()))
#define ipArray(arr,size) FI(i,0,size-1) si(arr[i]);
#define ipllArray(arr,size) FI(i,0,size-1) sill(arr[i]);
#define ii pair<int,int>
#define R(f) freopen(f,"r",stdin);
#define W(f) freopen(f,"w",stdout);
#define TEST int num_cases; cin>>num_cases;for(int case_id=1;case_id <= num_cases;++case_id)

typedef long long ll;

/* Main Code starts here :) */
typedef pair<int,char> pp;
const int mod = 1000000009;
pp b[100000+100];
int diff[100000+100];
#define color second
#define pos first
bool cmp(const pp& a, const pp& b){
    return a.pos < b.pos;
}
int main(){
    //R("ip.txt");
    //cout << (ll)(1e9 + 9) * (ll)(1e9 + 9);
    //db1("done");
    TEST{
        int n,m;    si(n);si(m);
        F(i,m)  {getchar(); scanf("%c",&b[i].color);  si(b[i].pos);}
        //db1("IN");
        sort(b,b+m,cmp);
        diff[m-1] = 0;  FD(i,m-2,0) diff[i] = b[i+1].pos - b[i].pos;
        int ans= 1;
        FD(i,m-2,0){
            if(b[i].color != b[i+1].color)  ans = ((ll)ans * diff[i]) % mod;
            //else dp[i] = dp[i+1];
        }
        pi(ans);
    }
}
