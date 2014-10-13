#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
string s="abcd";
int m[4][4];
int i,j;
for(i=0;i<4;i++)
{
    for(j=0;j<4;j++)
        m[i][j]=0;
}
for(int l=1;l<4;l++)
{
    for(i=0;i<4-l;i++)
    {
        j=i+l;
        //cout<<i<<endl;
        //cout<<s.at(i);
        //<<" "<<s[j];
        if(s[i]==s[j])
        {
          //  cout<<"no";
            m[i][j]=m[i+1][j-1];
        }
        else
        {
            //cout<<"han";
             m[i][j]=min(m[i][j-1],m[i+1][j])+1;
        }
        //cout<<m[i][j]<<endl;
    }
    //cout<<"yo"<<endl;
}
cout<<m[0][3];
}
