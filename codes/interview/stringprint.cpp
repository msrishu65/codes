#include<iostream>
using namespace std;
int main()
{
    string s="abcdefgh";
    int r=3;
    for(int i=0;i<r;i++)
    {
        int j=i;
        while(s[j])
        {
            cout<<s[j];
            j=j+r;
        }
    }



}
