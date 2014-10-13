#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
int x;
while(t--)
{
    cin>>x;
    int a[201]={1};
    int k=0,c=0;
    for(int i=1;i<=x;i++)
    {
        for(int j=0;j<=k;j++)
        {
            a[j]=a[j]*i+c;
            c=a[j]/10;
            a[j]=a[j]%10;
        }
        while(c)
        {
            k++;

            a[k]=c%10;
            c=c/10;
        }
    }
    for(int i=k;i>=0;i--)
        cout<<a[i];
    cout<<endl;
}
}
