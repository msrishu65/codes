#include<iostream>
using namespace std;
int iscontaining(string f,int c[])
{
    for(int i=0;i<f.length();i++)
    {
     if(c[f[i]]==1)
            c[f[i]]=0;
    }
    for(int i=0;i<256;i++)
    {
        if(c[i]!=0)
            return 0;
    }
    return 1;
}
int main()
{
string s="sunday";
string m="utensils";
string h="san";
string g="sun";
int c[256]={0};
for(int i=0;i<g.length();i++)
{
    c[g[i]]++;
}
if(iscontaining(s,c))
    cout<<s<<endl;
    for(int i=0;i<g.length();i++)
{
    c[g[i]]++;
}

if(iscontaining(m,c))
    cout<<m<<endl;
for(int i=0;i<g.length();i++)
{
    c[g[i]]++;
}

if(iscontaining(h,c))
cout<<h<<endl;

}
