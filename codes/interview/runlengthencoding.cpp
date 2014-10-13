#include<iostream>
#include<cstring>
#include<stdlib.h>
using namespace std;
int main()
{
string s="wwwwaaadexxxxxx";
//output  “w4a3d1e1x6″
string r="";
int c=1;
int i=1;
while(i<s.length()+1)
{
    if(s[i]==s[i-1])
    c++;
    else
    {
        r=r+s[i-1];
    char numstr[21]; // enough to hold all numbers up to 64-bits
    r=r+itoa(c, numstr, 10);
        c=1;
    }
    i++;
}
cout<<r;
}
