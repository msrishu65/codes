#include<iostream>
#include<stdio.h>
#include<limits.h>
#define R freopen("in","r",stdin)
#define W freopen("out","w",stdout)
using namespace std;
struct data
{
    int x;
    int index;
};
int a[100][200];
struct data dp[100][200];
int main()
{
    R;
    string s,r;
    int n,m;
    while(1)
    {
        cin>>s;
        if(s=="TheEnd")
            {cout<<"TheEnd"<<endl;
            break;
            }
        cin>>n>>m;
        string model[n];
        for(int i=0; i<n; i++)
        {
            cin>>r;
            model[i]=r;
            dp[i][0].index=i;
            for(int j=0; j<m; j++)
            {
                cin>>a[i][j];
                if(j==0)
                    dp[i][j].x=a[i][j];
            }
            //        cout<<r<<"completed"<<endl;
        }
        //      cout<<"input complete"<<endl;
        for(int j=1; j<m; j++)
        {
            for(int i=0; i<n; i++)
            {
                dp[i][j].x=INT_MAX;
                for(int k=0; k<n; k++)
                {
                    if(k==i)
                    {
                        if(dp[i][j].x>=dp[i][j-1].x)
                        {
                            dp[i][j].x=dp[i][j-1].x;
                            dp[i][j].index=k;
                        }
                    }
                    else
                    {
                        if(dp[i][j].x>dp[k][j-1].x-a[k][j]+100+a[i][j])
                        {
                            dp[i][j].x=dp[k][j-1].x-a[k][j]+100+a[i][j];
                            dp[i][j].index=k;
                        }
                    }
                }
            }
        }
//        cout<<"finished"<<endl;
        int mn=INT_MAX;
        /*for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cout<<dp[i][j].x<<" ,"<<dp[i][j].index<<"  ";
            }
            cout<<endl;
        }*/
        string name[m];
        int check[m];
        for(int i=0; i<n; i++)
        {
            if(mn>dp[i][m-1].x)
              {  mn=dp[i][m-1].x;
               name[m-1]=model[i];
              check[m-1]=dp[i][m-1].index;
        }
        }
        //cout<<name[m-1]<<endl;
        for(int i=m-2; i>=0; i--)
        {
            name[i]=model[check[i+1]];
            check[i]=dp[check[i+1]][i].index;
        }
        /*for(int i=0; i<m; i++)
        {
            cout<<name[i]<<" ";
        }
        cout<<endl;
        for(int i=0; i<m; i++)
            cout<<check[i]<<" ";
        cout<<endl;*/
        //output
        cout<<s<<endl;
        cout<<"Tk "<<mn<<endl;
        int i=1,c=1;
        int f=0;
        while(i<m)
        {
            if(name[i]!=name[i-1])
            {
                cout<<name[i-1]<<" for "<<c<<" month(s)"<<endl;
                c=1;
                if(i==m-1)
                f=1;
            }
            else
                c++;
            i++;
        }
        cout<<name[m-1]<<" for "<<c<<" month(s)"<<endl;
        cout<<endl;
    }
}
