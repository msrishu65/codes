#include<iostream>
using namespace std;
int main()
{
string s="maninderisgo";
int n;
cin>>n;
int p=s.length()/n;
for(int i=0;i<s.length();i++)
{
if(i%p==0)
cout<<endl;
cout<<s[i];
}
}
