#include<iostream>
using namespace std;
void print(string prefix,int start,int count,string s)
{
    for(int i=start;i<s.length();i++)
    {
        char b=s[i];
        cout<<b<<endl;
        if(count==1)
        {
         cout<<(prefix+b);
        }
        else
            print(prefix+b,b,count-1,s);
    }
}
int main()
{
 int n=3;
// cin>>n;
string s="123456789";
 print("",0,n,s);
}
