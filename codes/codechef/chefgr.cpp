#include<iostream>
using namespace std;
int main()
{
    int t,m,n;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int a[n],x=-1;
        for(int i=0; i<n; i++)
            {
            cin>>a[i];
            if(x<a[i])
            x=a[i];
            }
            int s=0;
            for(int i=0;i<n;i++)
            {
            s+=x-a[i];
            }
        if(s==m ||(m-s)%n==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}
