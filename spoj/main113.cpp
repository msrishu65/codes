#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;

        long long a[31],b[31];
    while(t--)
    {
        cin>>n;
        a[1]=0;
        a[2]=3;
        b[1]=3;
        b[2]=6;
        for(int i=3; i<=n; i++)
        {
            a[i]=a[i-1]+b[i-1];
            b[i]=2*a[i-1]+b[i-1];
        }
        cout<<a[n]+b[n]<<endl;
    }
}
