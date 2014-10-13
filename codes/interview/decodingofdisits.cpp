#include<iostream>
using namespace std;
int print(string s,int n)
{
    if(n==0 || n==1)
        return 1;
    int c=0;
    if(s[n-1]>'0')
        c=print(s,n-1);
        if(s[n-2]<'2' || (s[n-2]=='2' && s[n-1]<'7'))
        c=c+print(s,n-2);
return c;
}
int main()
{
    string s="121";
    cout<<print(s,3);
    int a[3];
    for(int i=0;i<3;i++)
    {
        a[i]=0;
    }
    for(int i=0;i<3;i++)
    {
        if(s[i]>'0')
            {
                a[i]++;
                if(i+1<3 && (s[i]<'2' ||(s[i]=='2' && s[i+1]<'7'))
//                a[i]++;
//            }
    }
}
