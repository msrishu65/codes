#include<iostream>
using namespace std;
string remainder(string a,string b)
{
    if(a<b)
        return a;

}
string gcd(string a,string b)
{
    if(b=="0")
        return a;
    else
    {
        string c=remainder(a,b);
       return gcd(b,c);
    }
}
int main()
{
int t;
cin>>t;
string a,b;
while(t--)
{
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
}
}
