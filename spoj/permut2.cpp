#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n)
    {
        int a[n+1];
        int b[n+1];
        b[0]=0;
        a[0]=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            b[a[i]]=i;
        }
        int i;
        for(i=1;i<=n;i++)
        {
            if(a[i]!=b[i])
            {
                cout<<"not ambiguous"<<endl;
                break;
            }
        }
        if(i==n+1)
            cout<<"ambiguous"<<endl;
            cin>>n;
    }
}
