#include<iostream>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
int x=a^b;
int c=0;
while(x)
{
    x=(x&(x-1));
    c++;
}
cout<<c;
}
