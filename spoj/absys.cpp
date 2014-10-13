#include<iostream>
#include<stdio.h>
#include<ctype.h>
#include<cstring>
#include<sstream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        getchar();
        string s="";
        int x=0,y=0,z=0;
        getline(cin, s);
        int n=s.length();
        int i=s.find("+");
        int j=s.find("=");
        for(int k=0;k<i-1;k++)
        {
            if(isalpha(s[k]))
            {
                x=-1;
                break;
            }
            else
            {
                int c=s[k]-'0';
                x=x*10+c;
            }
        }
        for(int k=i+2;k<j-1;k++)
        {
            if(isalpha(s[k]))
            {
                y=-1;
                break;
            }
            else
            {
                int c=s[k]-'0';
                y=y*10+c;
            }
        }
        for(int k=j+2;k<n;k++)
        {
            if(isalpha(s[k]))
            {
                z=-1;
                break;
            }
            else
            {
                int c=s[k]-'0';
                z=z*10+c;
            }
        }
        if(x==-1)
        {
            x=z-y;
        }
        else if(y==-1)
        {
            y=z-x;
        }
        else if(z==-1)
        z=x+y;
         cout<<x<<" + "<<y<<" = "<<z<<endl;
    }
}
