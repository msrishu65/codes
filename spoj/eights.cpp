#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    unsigned long long x,y;
    while(t--)
    {
        cin>>x;
        y=(x-1)*250+192;
        cout<<y<<endl;
    }
}
