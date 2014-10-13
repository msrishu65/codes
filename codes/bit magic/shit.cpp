#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
if(n && !(n&(n-1)))
cout<<n;
else
{
    int c=0;
    while(n>0)
    {
        n=n>>1;
        c++;
    }
    cout<<(1<<c);
}
}
