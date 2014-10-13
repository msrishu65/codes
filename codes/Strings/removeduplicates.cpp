#include<iostream>
using namespace std;
int main()
{
string s="maninderisdon";
int c[256]={0};
for(int i=0;i<s.length();i++)
{
if(c[s[i]]!=0)
{
s.erase(i,1);
}
else c[s[i]]++;
}
cout<<s;
}
