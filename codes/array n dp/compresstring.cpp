#include<iostream>
using namespace std;
int main()
{
    string s="aaabbbbccddd";
    string r=" ";
    int c=0;
    for(int i=1;i<s.length();i++)
    {
        if(s[i]==s[i-1])
            c++;
        else
        {
            string v=to_string(6);

        }
    }
    cout<<r;
}
