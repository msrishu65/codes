#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int prime[32000]={0};
    vector<int>v;
    for(int i=2;i*i<32000;i++)
    {
        if(prime[i]==0)
        {
            int j=i;
            int k=2;
            while(j*k<32000)
            {
                //j*k;
        //        k++;
                prime[j*k]=1;
                k++;
            }
        }
    }
    for(int i=2;i<32000;i++)
    {
        if(prime[i]==0)
            v.push_back(i);
    }
    int t;
    cin>>t;
    int m,n;
    while(t--)
    {
        cin>>m>>n;
        if(m<2)
            m=2;
        while(m<=n)
        {
            int f=0;
            for(int i=0;i<v.size();i++)
            {
                if(v[i]*v[i]<=m && m%v[i]==0)
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
                cout<<m<<endl;
                m++;
        }
        cout<<endl;
    }
}
