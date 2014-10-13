#include<iostream>
using namespace std;
int palindromesubseq(string s,int start,int end)
{
    if(start>end)
        return 0;
    if(start==end)
        return 1;
    if(s[start]==s[end])
        return palindromesubseq(s,start+1,end-1)+2;
    else
        return max(palindromesubseq(s,start,end-1),palindromesubseq(s,start+1,end));
}
int main()
{
string s="BBABCBCAB";
//cout<<palindromesubseq(s,0,8);
int a[9][9];
for(int i=0;i<9;i++)
{
    a[i][i]=1;
}

for(int i=0;i<8;i++)
{
    a[i][i+1]=2;
}
for(int l=3;l<=9;l++)
{
    for(int i=0;i<=9-l;i++)
    {
      int  j=i+l-1;
        if(s[i]==s[j])
            a[i][j]=a[i+1][j-1]+2;
        else
            a[i][j]=max(a[i][j-1],a[i+1][j]);
    }
}
cout<<a[0][8];
}
