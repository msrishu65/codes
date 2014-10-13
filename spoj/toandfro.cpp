#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    while(x)
    {
    string s;
    cin>>s;
    int n=s.length();
    int y=2*x-1;
    int p=y;
    int c=1;
    string r="";
    // ttyohhiene e  s  i  a  a  b  s  s
    // 0123456789 10 11 12 13 14 15 16 17
    /*
    t t y
    h h o
    i e n
    s e e
    i a a
    s s b
    */
//    cout<<endl;
    for(int i=0;i<x;i++)
    {
        int j=i;
        int f=0;

        while(j<n)
        {
          //  cout<<j<<" "<<s[j]<<endl;
            r=r+s[j];
            if(f==0)
            {
                j=j+y;
            }
            else
            {
                j=j+c;
            }
            f=1-f;
        }
        y=y-2;
        c=c+2;
       // cout<<r<<endl;
        if(y<=0)
            break;
    }
    cout<<r<<endl;
    cin>>x;
    }
}
