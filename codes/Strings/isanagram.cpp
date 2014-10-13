#include<iostream>
using namespace std;
int main()
{
string s="hahaha";
string r="ahahah";
int c[256]={0};
for(int i=0;i<s.length();i++)
{
    c[s[i]]++;
}
for(int i=0;i<r.length();i++)
{
    c[r[i]]--;
}
for(int i=0;i<256;i++)
{
    if(c[i]!=0)
    {
        cout<<"no bitch";
        return 0;
    }
}
cout<<"yo bitch";
}
