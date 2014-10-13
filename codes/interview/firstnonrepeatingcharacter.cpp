#include<iostream>
using namespace std;
int main()
{
string s="manrinder";
int a[256];
for(int i=0;i<256;i++)
    a[i]=0;
for(int i=0;i<s.length();i++)
{
            a[s[i]]++;
}
for(int i=s.length()-1;i>=0;i--)
{
    if(a[s[i]]==1)
    {
        cout<<s[i];
    break;
    }
}
}

