#include<iostream>
using namespace std;
string reverse(string s1)
{
    if(s1.length()<=1)
        return s1;
        else
    return reverse(s1.substr(1,s1.length()))+s1.at(0);
}
int main()
{
    string s="han baai g ki hal ne";
    int i=0;
    string s1=" ";
    int c=0;
    int j=s.length();
    while(i<=j+1)
    {
        if(s[i]==' ' || s[i]=='\0')
         {
                //cout<<i<<" "<<c;
                s1=reverse(s1);
   //             cout<<s1<<endl;
                s.replace(i-c,c,s1);
                s1=" ";
                //cout<<s<<endl;
                c=0;
                cout<<i<<endl;
         }
         if(s[i]!=' ')
         s1=s1+s[i];
         c++;
         i++;
    }
s=reverse(s);
   cout<<s;
}
