#include<iostream>
using namespace std;
int main()
{
    int t=-1;
    while(t!=0)
    {
    cin>>t;
    if(t<=100 && t>=1)
    {
    int m[t+1];
    m[0]=0;
    m[1]=1;
    for(int i=2;i<=t;i++)
    {
        m[i]=m[i-1]+i*i;
    }
    cout<<m[t]<<endl;
    }
    }
}
