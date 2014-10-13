#include<iostream>
using namespace std;
int isequal(int a[],int b[])
{
    for(int j=0;j<256;j++)
    {
        if(a[j]!=b[j])
            return 0;
    }
    return 1;
}
int main()
{
    string s="BACDGABCDA";
    string t="ABCD";

    int a[256];
    int b[256];
    for(int i=0;i<256;i++)
    {
        a[i]=0;
        b[i]=0;
    }
    int m=t.length();
    int n=s.length();
    for(int i=0;i<m;i++)
    {
        (a[t[i]])++;
        (b[s[i]])++;
    }
    for(int i=m;i<n;i++)
    {
        if(isequal(a,b))
        {
            cout<<"found at"<<i-m<<endl;
        }
        (b[s[i]])++;
        (b[s[i-m]])--;
    }
    if(isequal(a,b))
                   cout<<"found at"<<n-m<<endl;

}
