#include<iostream>
using namespace std;
int main()
{
char a[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
int n;
cin>>n;
string s="";
while(n)
{
    if(n%26!=0)
    {
char j='A'+(n%26)-1;
s=s+j;
n=n/26;
    }
    else
    {
        s=s+'Z';
        n=(n/26)-1;
    }
}
int i=0;
int j=s.length()-1;
while(i<j)
{
    char d=s[i];
    s[i]=s[j];
    s[j]=d;
    i++;
    j--;
}
cout<<s;
}
