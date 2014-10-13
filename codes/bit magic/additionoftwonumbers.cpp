#include<iostream>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
//x=101 y=001
int c;
while(y)
{
    c=x&y;
    x=x^y;
    y=c<<1;
    }
    cout<<x;
}
