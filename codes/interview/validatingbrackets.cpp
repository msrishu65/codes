#include<iostream>
#include<stack>
using namespace std;
bool isMatchingPair(char character1, char character2)
{
   if(character1 == '(' && character2 == ')')
     return 1;
   else if(character1 == '{' && character2 == '}')
     return 1;
   else if(character1 == '[' && character2 == ']')
     return 1;
   else
     return 0;
}
int valid(char a[])
{
    int i=0;
    stack<char >s;
        while(a[i])
    {
        if(a[i]=='{' || a[i]=='(' || a[i]=='[')
            s.push(a[i]);
        else
        {
            if(s.empty())
                return 0;
            char c=s.top();
            s.pop();
            if(!isMatchingPair(c,a[i]))
                return 0;

        }
        i++;
    }
if(s.empty())
    return 1;
else
    return 0;
}
int main()
{

    char a[10]="{()}[]";
    if(valid(a))
        cout<<"yo";
    else
        cout<<"fuckoff";
}
