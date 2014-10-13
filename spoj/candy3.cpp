#include<iostream>
#define m 1000000007
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cout<<endl;
        cin>>n;
        long long s=0;
        long long x;
        for(int i=0;i<n;i++)
            {
                cin>>x;
                s=(s%m+x%m)%m;
            }
            if(s%n==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
    }

}
