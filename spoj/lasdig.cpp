#include<iostream>
using namespace std;
long long last(long long a,long long b)
{
    long long x=1;
    while(b)
    {
        if(b%2)
            x=(x*a)%10;
        b=b/2;
        a=(a*a)%10;
    }
    return x;
}
int main()
{
    int t;
    long long a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        int c=last(a,b);
        cout<<c%10<<endl;
        }
}
