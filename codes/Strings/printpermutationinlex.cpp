#include<iostream>
#include<algorithm>
using namespace std;
int first(string s)
{
    int n=s.length();
for(int i=n-2;i>=0;i--)
{
    if(s[i]<s[i+1])
        return i;
}
return -1;
}
int ceil(string s,int f,int st)
{
int ce=st;
for(int i=st+1;i<s.length();i++)
{
    if(s[i]>s[f] && s[i]<s[ce])
        ce=i;
}
return ce;
}
void swap(char *a,char *b)
{
    char t=*a;
    *a=*b;
    *b=t;
}
int main()
{
string s="abcd";
sort(s.begin(),s.end());

while(1)
{
    cout<<s<<endl;
    int fi=first(s);
    if(fi==-1)
        break;
    else
    {
        int la=ceil(s,fi,fi+1);
    //cout<<s[fi]<<" "<<s[la]<<endl;
        swap(&s[fi],&s[la]);
      //  cout<<s[fi]<<" "<<s[la]<<endl;

        sort(s.begin()+fi+1,s.end());
        //cout<<s;
      //  break;
    }
}
//1.
}
