#include<iostream>
using namespace std;
int main()
{
string s="my name is skrillex";
string r="%20";
for(int i=0;i<s.length();i++)
{
int x=s.at(i);
 if(x==32)
 {
     s.replace(i,1,r);
 }
}
cout<<s;
}
