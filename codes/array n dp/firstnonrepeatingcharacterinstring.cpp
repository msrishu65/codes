#include<iostream>
using namespace std;
int main()
{
string s="mmaninder";
int c[222]={0};
for(int i=0;i<s.length();i++)
{
    c[s[i]]++;
}
for(int i=0;i<222;i++)
{
    if(c[s[i]]==1)
    {
        cout<<s[i];
        break;
    }
}

}
