#include<iostream>
#define f(i,j) for(i=0;i<j;i++)
using namespace std;
int a[100][100];
int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        f(i,n){f(j,i+1){cin>>a[i][j];}}
        for(i=n-2;i>=0;i--){f(j,i+1){a[i][j]+=max(a[i+1][j],a[i+1][j+1]);}}
            cout<<a[0][0]<<"\n";
    }
}

