#include<iostream>
using namespace std;
int main()
{
    string s="abcdefgh";
    int r=3;
    int k=0;
    while(k<r)
    {
    for(int i=k;i<s.length();i=i+r)
    {
        cout<<s[i];
    }
    k++;
    }
}
