#include<iostream>
using namespace std;
int main()
{
string s="AABAACAADAABAAABAA";
string t="AABA";
int a[t.length()];
for(int i=0;i<s.length();i++)
{
    int f=0;
    for(int j=0;j<t.length();j++)
    {

        if(s[i+j]!=s[j])
        {
            f=1;
            break;
        }
    }
    if(f==0)
    {
        cout<<"found at"<<i<<endl;
    }
}
}
