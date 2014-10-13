#include<iostream>
#include<stack>
#include<cstring>
#include<stdlib.h>
#include<ctype.h>
using namespace std;
int main()
{
string str="1+2*3";
stack<int>s;
int i=0;
int oprtr=0;
int oprnd=0;
char ch;
int d;
while(i<str.length())
{
    if(str[i]==' ')
    {
        i++;
        continue;
    }
     if(isdigit(str[i]))
     {
        if(oprnd==1)
            {
             if(oprtr!=1)
                    break;
             int x=s.top();
             s.pop();
             char k=str[i];
             int y=k-'0';
             switch(ch)
             {
             case '+':
                d=x+y;
                break;
             case '-':
                d=x-y;
                break;
             case '*':
                d=x*y;
                break;
             case '/':
                d=x/y;
                break;
             }
             s.push(d);
             oprtr=0;
            }
            else
            {
                char f=str[i];
                int h=f-'0';
                s.push(h);
                oprnd++;
            }
     }
     else
     {
         ch=str[i];
         oprtr++;
     }
     i++;
     //cout<<s.top()<<endl;
}
cout<<s.top();
}
