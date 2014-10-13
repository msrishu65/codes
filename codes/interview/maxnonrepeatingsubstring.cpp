#include<iostream>
using namespace std;
int main()
{
    string s="geeksforgeeks";
    int maxlength=0;
    int length=0;
    int start=0;
    int c[256];
    for(int i=0;i<256;i++)
        c[i]=-1;
    for(int i=0;i<s.length();i++)
    {
        if(c[s[i]]==-1 || i-c[s[i]]>maxlength)
        {
            length++;
            c[s[i]]=i;
        }
        else
        {
            start=c[s[i]]+1;
            length=i-start+1;
            c[s[i]]=i;
        }
        if(maxlength<length)
            maxlength=length;
        //    cout<<start<<" "<<maxlength<<endl;
    }
    cout<<maxlength;
}
