#include<iostream>
using namespace std;
string add(string a,string b)
{
    if(b.size()>a.size())swap(a,b);
    int n=a.size();
    int m=b.size();
    int dif=n-m;
    for(int i=0; i<dif; i++)
        b="0"+b;
    int c=0;
    int sum=0;
    string re="";
    for(int i=n-1; i>=0; i--)
    {
        int x=a[i]-'0';
        int y=b[i]-'0';
        sum=x+y+c;
        re=(char)((sum%10)+'0')+re;
        c=sum/10;
    }
    if(c)
    {
        re=(char)(c+'0')+re;
    }
    return re;
}
string sub(string a,string b)
{
    if(a.size()<b.size())
        swap(a,b);
    int n=a.size();
    int m=b.size();
    int dif=n-m;
    for(int i=0; i<dif; i++)
        b="0"+b;
    int c=0;
    string r="";
    for(int i=n-1; i>=0; i--)
    {
        int y=a[i]-'0';
        int x=b[i]-'0';
        if(c)
        {
            if(y)
            {
                y--;
                c=0;
            }
            else
                y=9;
        }
        if(i==0 && x==y)
        {
            continue;
        }
        else if(y-x>=0)
        {
            char v=(char)(y-x+'0');
            r=v+r;
            //c=0;
        }
        else
        {
            char v=(char)(y-x+10+'0');
            r=v+r;
            c=1;
        }
    }
    return r;
}
string divideby2(string a)
{
    int n=a.size();
    string res="";
    int c=0;
    if(n==1)
    {
        int x=a[0]-'0';
        x=x/2;
        res=res+(char)(x+'0');
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            int x=a[i]-'0';
            if(x<2 && i==0)
            {
                c=1;
                continue;
            }
            if(c)
            {
                x=x+10;
            }
            c=x%2;
            x=x/2;
            res=res+(char)(x+'0');
        }
    }
    return res;
}
int main()
{
    int t=10;
    string s,d;
    while(t--)
    {
        cin>>s>>d;
        string r=sub(s,d);
        cout<<r<<endl;
        string x=divideby2(r);
        string y=add(x,d);
        cout<<y<<endl;
        cout<<x<<endl;
    }
}
