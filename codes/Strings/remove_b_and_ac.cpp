#include<iostream>
using namespace std;
int main()
{
    int start;
    //string s="abacbacbc";
    //string s = "ad";

    //string s= "acbac";

    //string s = "aaac";

   //string s = "react";
    //string s = "aa";

    //string s = "ababaac";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='a')
        {
            if(i+1<s.length()&&s[i+1]=='c')
            {
                s.erase(i,2);
                i--;
            }
            else
            {
                start=i;
            }
        }
        if(s[i]=='c')
        {
            if(i-1==start)
               {

             s.erase(i-1,2);
                i--;
               }
        }
        if(s[i]=='b')
        {
            s.erase(i,1);
            i--;
        }
    }

    cout<<s;
}
