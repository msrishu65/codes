#include<iostream>
#include<vector>
using namespace std;
int stringtonumber(string str)
{
    int c=0;
    for(int i=0; i<str.length(); i++)
    {
        c=c*10+str[i]-'0';
    }
    return c;
}
vector<int>lad;
vector<int>snakes;
int mini=0;
int minsteps(int a[],int x,int count)
{
    if(x<1 || x>100)
        return 0;
    if(a[x]!=0)
       {
           if(count<a[x])
            return 1;
           else
            return 0;
       }

    if(x==100)
        return 1;
        a[x]=count;
    if(lad[x]!=-1)
        return minsteps(a,lad[x],count);
    else if(snakes[x]!=-1)
        return minsteps(a,snakes[x],count);
    for(int i=1; i<7; i++)
    {
        //cout<<"count is"<<count<<endl;
        if(minsteps(a,x+i,count+1))
        {
            cout<<"yo"<<count<<endl;
            if(mini>count)
                mini=count;
        }
    }
}
int main()
{
    int t;
    cin>>t;
    string s;
    string r;
    string q;
    while(t--)
    {
        lad.clear();
        lad.resize(101,-1);
        snakes.clear();
        snakes.resize(101,-1);
        cin>>s;
        int in=s.find(',');
        string left=s.substr(0,in);
        string right=s.substr(in+1);
        int l=stringtonumber(left);
        int sn=stringtonumber(right);
        // cout<<l<<" "<<sn<<endl;
        for(int i=0; i<l; i++)
        {
            cin>>r;
            int in=r.find(',');
            string left=r.substr(0,in);
            string right=r.substr(in+1);
            int li=stringtonumber(left);
            int sni=stringtonumber(right);
            //cout<<"ladder pair is"<<li<<" "<<sni<<endl;
            lad[li]=sni;
        }
        for(int i=0; i<sn; i++)
        {
            cin>>q;
            int in=q.find(',');
            string left=q.substr(0,in);
            string right=q.substr(in+1);
            int li=stringtonumber(left);
            int sni=stringtonumber(right);
            //cout<<"snake pair is"<<li<<sni;
            snakes[li]=sni;
        }
        int a[101]= {0};
        minsteps(a,1,0);
//       cout<<"yo"<<endl;
        cout<<mini<<"yes"<<" "<<"y"<<endl;
    }
}
