#include<iostream>
using namespace std;
int main()
{
string s=" ";
//"my name is maninder singh";
cout<<s[0];
for(int i=1;i<s.length();i++)
{
    if(s[i]==' ')
        cout<<s[i+1];
}
}
