#include<iostream>
#include<cstring>
using namespace std;
string r="";
int dictionarywords(string w)
{
    string dictionary[]={"i","am","maninder"};
    for(int i=0;i<3;i++)
    {
        if(dictionary[i].compare(w)==0)
        {
            return 1;
        }
    }
    return 0;
}
/*int wordbreak(string s)
{
    if(s.length()==0)
        return 1;
    for(int i=1;i<=s.length();i++)
    {
        if(dictionarywords(s.substr(0,i))&&wordbreak(s.substr(i,s.length()-i)))
            return 1;
    }
    return 0;
}
*/
int wordbreak(string s,int start,int end)
{
    if(end>s.length())
        return 0;
    if(s.length()==0)
        return 1;
   // cout<<s.substr(start,end)<<endl;
   if((dictionarywords(s.substr(start,end))))
   {
//       cout<<s.substr(start,end);
       r=r+s.substr(start,end);
       r=r+" ";
       if(start==0)
       start=end;
       else
        start=end+1;
       end=1;
       wordbreak(s,start,end);
   }
   else
    {end=end+1;
    wordbreak(s,start,end);
}
}
/*
int valid(string s)
{
    int n=s.length();
    int w[n+1];
            for(int i=0;i<=n;i++)
            w[i]=0;
        for(int i=1;i<=n;i++)
        {
            if(w[i]==0 && dictionarywords(s.substr(0,i)))
                w[i]=1;
            if(w[i]==1)
            {
             if(i==n)
                break;
             for(int j=i+1;j<=n;j++)
             {
              if(w[j]==0 && dictionarywords(s.substr(i,j-i)))
                w[j]=1;
                 if(j==n && w[j]==1)
                 break;
             }
            }
        }
        for(int i=n;i>=0;i--)
        {
            if(w[i]==1)
              {
                s.insert(i," ");
              }
        }
        cout<<s;
return 0;

}*/
int main()
{
    string s="iammaninder";
    wordbreak(s,0,1);
        cout<<r;
    /*else
        cout<<"no";*/
      //  valid(s);*/

}

