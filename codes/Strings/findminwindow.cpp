#include<iostream>
using namespace std;
int main()
{

    string s="this is a test string";
    string test="tist";
    int c[256]={0};
    int ss[256]={0};
    for(int i=0;i<test.length();i++)
        {
            c[test[i]]++;
        }
        int start=0,co=0;
        int n=test.length();
        int minlen=99999;
        int minstart;
        int minend;
    for(int i=0;i<s.length();i++)
    {
      if(c[s[i]]==0) continue;
          ss[s[i]]++;
          if(ss[s[i]]<=c[s[i]])
            {
                co++;
            }
          if(co==n)
          {
           while(c[s[start]]==0 || ss[s[start]]>c[s[start]])
           {
               if(ss[s[start]]>c[s[start]])
                ss[s[start]]--;
            start++;
           }
            int len=i-start+1;
            if(len<minlen)
            {
                minlen=len;
                minstart=start;
                minend=i;
            }
            }
    }
    cout<<minlen<<" "<<minstart<<" "<<minend;
}
