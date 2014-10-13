#include<iostream>
using namespace std;
int main()
{
    //some wrong code
string s="abcdabeafgha";
int c[256]={-1};
int m=1;
int co=1;
int start=0;
int end;
c[s[0]]=0;
for(int i=1;i<s.length();i++)
{
    start=c[s[i]];
    if(start==-1 || i-co>start)
    {
        co++;
    }
    else
    {

   if(co>m)
    {
        m=co;
    }
        co=i-start;
    }
    c[s[i]]=i;
}
if(co>m)
    m=co;
cout<<endl;
cout<<m;
}
