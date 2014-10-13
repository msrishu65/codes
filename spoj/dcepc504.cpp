#include<iostream>
#include<math.h>
using namespace std;
int x;
int check(int n,int e,int f)
{
    if(e<=0)
        return 0;
    static int s=0;
    s++;
    if(s==n)
        {
            cout<<"s is"<<s<<endl;
            x=f;
        };
    check(n,e-1,f);
    check(n,e-1,1-f);
}
int main()
{
    int t;
    cin>>t;
    int n;
    unsigned long long k;
    while(t--)
    {
    cin>>n>>k;
    unsigned long long c=pow(2,n-1)-1+k;
    unsigned long long e=c-k+pow(2,n-1);
    cout<<c<<" "<<e<<endl;
    check(c,e,1);
    if(x)
        cout<<"Male"<<endl;
    else
        cout<<"Female"<<endl;
    }
}
