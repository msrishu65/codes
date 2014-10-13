#include<iostream>
using namespace std;
int main()
{
string s="abcdefacagfacbacer";
string r="abc";
int a[256];
for(int i=0;i<256;i++)
    a[i]=0;
    int start=0;
    int maxlength=0;
    int maxstart;
    for(int i=0;i<r.length();i++)
    {
        a[r[i]]=1;
    }
    int c=0;
    for(int i=0;i<s.length();i++)
    {
        if(a[s[i]]==1)
        {
            c++;
            a[s[i]]++;
        }
        else if(a[s[i]]==0)
        {
            if(c==3)
            {
                if(i-start-1>maxlength)
                {
                    maxlength=i-start-1;
                    maxstart=start+1;
                }
            }
            start=i;
        }
    }
    cout<<maxlength<<" "<<maxstart;

}
