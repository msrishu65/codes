#include<iostream>
using namespace std;
int a[1001];
int m[1001][1001];
int maxit(int i,int j)
{
    if(i>j)
        return 0;
    if(m[i][j]!=-1)
        return m[i][j];
    return m[i][j]=max(a[i]+(a[j]>a[i+1]?maxit(i+1,j-1)-a[j]:maxit(i+2,j)-a[i+1]),a[j]+(a[i]>=a[j-1]?maxit(i+1,j-1)-a[i]:maxit(i,j-2)-a[j-1]));
}
int main()
{
    int n;
    int c=0;
    while(1)
    {
    cin>>n;
    if(n==0)
    break;
    c++;
        for(int i=0;i<1001; i++)
            for(int j=0;j<1001; j++)
                m[i][j]=-1;
        for(int i=0; i<n; i++)
            cin>>a[i];
        cout<<"In game "<<c<<", the greedy strategy might lose by as many as "<<maxit(0,n-1)<<" points."<<endl;
    }
}
