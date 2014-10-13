#include<iostream>
#include<stdio.h>
using namespace std;
long long f[1000001];
int x[1000001];
int a[1000001];
long long y[1000001];
long long g[1000001];
int prime[10001];
int main()
{
    for(int i=0; i<1000001; i++)
    {
        f[i]=0;
        x[i]=0;
        a[i]=0;
        y[i]=1;
        g[i]=0;
    }
    for(int i=2;i*i<=1000000;i++)
    {
    if(a[i]==0)
    {
        for(int j=i*i;j<=1000000;j=j+i)
        {
            if(a[j]==0)
            {
            a[j]=1;
            x[j]=i;
            }
        }
    }
    }

        int j=0;
    for(int i=2;i<=1000000;i++)
    {
        if(a[i]==0)
            {
                x[i]=i;
                if(i<10001)
                {
                prime[j]=i;
                j++;
//                cout<<i<<endl;
                }
                //cout<<j<<endl;
            }
    }
    for(int i=2;i<=1000000;i++)
    {
        f[i]=f[i-1]+x[i];
    }
    for(int i=2;i<=1000000;i++)
    {
        for(int k=0;k<10001;k++)
        {
            int c=prime[k];
            if(c*c>i)
                break;
            else if(i%c==0)
            {
                if(c!=i/c)
                y[i]=y[i]+c+i/c;
                else
                    y[i]=y[i]+c;
              }
        }
 //        cout<<y[i]<<",";
    }
 for(int i=2;i<1000001;i++)
    {
        g[i]=g[i-1]+y[i];
    }
   int t;
    cin>>t;
    int n;
    unsigned long long s;
    while(t--)
    {
        cin>>n;
        if(n<=1)
            cout<<"0"<<endl;
        else
        {
            cout<<(f[n]+g[n])%n<<endl;
        }
     //   cout<<x[n]<<" "<<f[n]<<endl;
    }
}
