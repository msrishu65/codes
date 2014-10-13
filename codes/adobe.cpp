#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if((n%2)==0 || n==5)
        cout<<"fuck you";
    else
    {
    string s="11";
    int m=11%n;
    while(m!=0)
    {
        s=s+"1";
        m=(m*10+1)%n;
    }
    cout<<s;
}
}
