#include<iostream>
using namespace std;
int length=1;
/*int ls(string s,int start,int end)
{
    if(start>end)
        return 0;
    if(start==end)
        {
            length=1;
            return 1;
        }
    if(end==start+1)
    {
        if(s[end]==s[start])
        {length=2;
        return 1;
        }
    }
    else
    {
        if(s[start]==s[end] && ls(s,start+1,end-1))
            {
                if(end-start+1>length)
                   {
                    length=end-start+1;
                    cout<<start<<" "<<end<<" "<<length<<endl;
                    }
                return 1;
            }
        else
            {
            ls(s,start,end-1);
            ls(s,start+1,end);
            }
    }
}*/
int main()
{
 string s="forgeeksskeegfor";
    int n=s.length();
    //ls(s,0,n-1);
    int table[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            table[i][j]=0;
    }

    for(int i=0;i<n;i++)
        table[i][i]=1;

    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
        {
            table[i][i+1]=1;
           length=2;
        }
    }
    int j;
    for(int k=3;k<=n;k++)
    {
        for(int i=0;i<n-k+1;i++)
        {
          j=i+k-1;
          if(table[i+1][j-1] && s[i]==s[j])
          {
              table[i][j]=1;
              if(k>length)
                length=k;
          }

        }
    }
    cout<<length;
}
