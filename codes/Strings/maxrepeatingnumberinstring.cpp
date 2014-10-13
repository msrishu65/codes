#include<iostream>
using namespace std;
char maxocword(int c[])
{
    int m=0,mi=0;
for(int i=0;i<256;i++)
{
if(c[i]>m)
{
m=c[i];
mi=i;
}
}
return mi;
}
int main()
{
string s="meawesome";
int c[256]={0};

for(int i=0;i<s.length();i++)
{
c[s[i]]++;
}
cout<<maxocword(c);
}
