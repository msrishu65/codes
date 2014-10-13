#include<iostream>
using namespace std;
void reversestring(string &s,int i,int j)
{
    while(i<j)
    {
        char c=s[i];
        s[i]=s[j];
        s[j]=c;
        j--;
        i++;
    }
}
void reverseWords(string &s)
{
        int n=s.length();
        int start=0;
        for(int k=0;k<n;k++)
        {
            if(s[k]==' ')
            {
                reversestring(s,start,k-1);
                start=k+1;
            }
        }
        reversestring(s,start,n-1);
        reversestring(s,0,n-1);
}
int main()
{
//string s="yo baby sexy";
string s="      ";
reverseWords(s);
cout<<s;
}
