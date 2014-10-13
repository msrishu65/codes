#include<iostream>
using namespace std;
int main()
{
string s="maninderisdon";
int c[256]={0};
for(int i=0;i<s.length();i++)
{
c[s[i]]++;
}
for(int i=0;i<256;i++)
{

if(c[i]>1)
{
    char j=i;
cout<<j<<" "<<c[i]<<endl;
}
}
}
