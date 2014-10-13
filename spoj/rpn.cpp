#include<iostream>
#include<stdio.h>
#include<ctype.h>
#include<stack>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        string r="";
        cin>>s;
        stack<char>p;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(isalpha(s[i]))
                r=r+s[i];
            else if(s[i]==')')
            {
                while(1)
                {
                    if(p.empty())
                        break;
                    else if(p.top()=='(')
                    {
                        p.pop();
                        break;
                    }
                    else
                    {
                        char c=p.top();
                        p.pop();
                        r=r+c;
                    }
                }
            }
            else
                p.push(s[i]);
        }
        cout<<r<<endl;
    }

}
