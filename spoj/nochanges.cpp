#include<iostream>
using namespace std;
int main()
{
    int s,n;
    cin>>s>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=1;i<n;i++)
        a[i]+=a[i-1];
    int sum[s+1];
    for(int j=0;j<s+1;j++)
        {
            sum[j]=0;
        }
        for(int j=0;j<n;j++)
            sum[a[j]]=1;
    for(int j=0;j<n;j++)
    {
        for(int k=a[j];k<=s;k++)
            {
                sum[k]+=sum[k-a[j]];
             }
    }
    if(sum[s]!=0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
