#include<iostream>
using namespace std;
void markmuliples(int a[],int k,int n)
{
    int i=2,num;
    while((num=i*k)<=n)
    {
        a[num-1]=1;
        i++;
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        a[i]=0;
    for(int i=1;i<n;i++)
    {
    if(a[i]==0)
    {
        cout<<i+1<<" ";
        markmuliples(a,i+1,n);
    }
    }
}
