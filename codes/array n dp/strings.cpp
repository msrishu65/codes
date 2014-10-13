#include<iostream>
#include<string>
using namespace std;
int main()
{
string s="maninder";
string r=" ";
int x=s.length();
int i=0;
int j=x-1;
//int k=0;
while(i<j)
{
    char c=s[i];
    s[i]=s[j];
    s[j]=c;
    i++;
    j--;
}
cout<<s;
string l="z";
int v=l.at(0);

cout<<v;
return 0;
}
