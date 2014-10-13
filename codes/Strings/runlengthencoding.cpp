#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
int main()
{
string s="wwwwaaadexxxxxx";
//output w4a3d1e1x6
int c=0;
string d=s.substr(0,1);
//cout<<d<<endl;
int i=1;
while(i<s.length()+1)
{
    if(s[i]==s[i-1])
        c++;
    else
    {
    char numstr[21]; // enough to hold all numbers up to 64-bits
    d= d+ itoa(c+1, numstr, 10);
    d=d+s[i];
  //  cout<<d;
  c=0;
    }
    i++;
}
cout<<d;

}
