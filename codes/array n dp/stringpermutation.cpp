#include<iostream>
using namespace std;
int main()
{
    string s="hahaha";
    string r="ahahah";
int a[125]={0};
for(int i=0;i<s.length();i++)
{
    int x=s.at(i);
    a[x]=a[x]+1;
}
for(int i=0;i<r.length();i++)
{
    int y=r.at(i);
    a[y]=a[y]-1;
}

return 0;
}
