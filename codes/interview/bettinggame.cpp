#include<iostream>
using namespace std;
int main()
{
string s="wlwwl";
int sum=10;
int b=1;
int i=0;
while(s[i])
{
    if(s[i]=='w')
        sum=sum+b;
    else if(s[i]=='l')
    {
        if(sum<b)
        {
            break;
        }
        sum=sum-b;
        b=2*b;
    }
    i++;
}
cout<<sum;
}
