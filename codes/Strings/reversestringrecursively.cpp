#include<iostream>
using namespace std;
void reversestring(string *s,int start,int end)
{
if(start>=end)
return;
char *t=*s[start];
s[start]=s[end];
s[end]=t;
//cout<<s[start]<<" "<<s[end]<<endl;
reversestring(s,start+1,end-1);
return;
}
int main()
{
string s="maninder";
reversestring(&s,0,7);
//cout<<s;

}
