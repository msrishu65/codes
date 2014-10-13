#include<iostream>
using namespace std;
int findsmallerinright(string s,int start)
{
int c=0;

for(int i=start+1;i<s.length();i++)
{
if(s[i]<s[start])
c++;

}
return c;
}
int fact(int n)
{
if(n==0)
return 1;
return n*fact(n-1);
}
int main()
{
string s="string";
int rank=1;
int n=s.length();
int m=fact(n);
int co;
for(int i=0;i<n;i++)
{
m=m/(n-i);
co=findsmallerinright(s,i);
//cout<<co<<endl;
rank=rank+m*co;
}
cout<<rank;
}
