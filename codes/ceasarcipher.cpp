#include<iostream>
using namespace std;
int main()
{
string s="abcde";
//eeee
int c=0;
int n=s.length();
for(int i=n-1;i>=0;i--)
{
    int k=((s[i]-'a')+c)%26;
    char j=k+'a';
    s[i]=j;
    c++;
}
cout<<s;
}
