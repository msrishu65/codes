#include<iostream>
#include<limits.h>
using namespace std;
long long a[100000][3];
int main()
{
    int n;
    int c=0;
    while(1)
    {
        c++;
        cin>>n;
        if(n==0)
            break;
        for(int i=0; i<n; i++)
            for(int j=0; j<3; j++)
                cin>>a[i][j];
        a[0][0]=INT_MAX;
        a[0][2]+=a[0][1];
        for(int i=1; i<n; i++)
        {
            a[i][0]+=min(a[i-1][1],a[i-1][0]);
            a[i][1]+=min(a[i-1][0],min(a[i-1][1],min(a[i][0],a[i-1][2])));
            a[i][2]+=min(a[i-1][1],min(a[i-1][2],a[i][1]));
        }
//        a[n-1][1]+=min(a[n-2][0],min(a[n-2][1],min(a[n-1][0],a[n-2][2])));
        cout<<c<<". "<<a[n-1][1]<<endl;
    }
}
