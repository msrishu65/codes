#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int s=(2*n)/3;
int p=s;
for(int i=0;i<n/3;i++)
{
    for(int j=0;j<i;j++)
        cout<<" ";
    cout<<"*";
    for(int j=0;j<s;j++)
        cout<<" ";
    cout<<"*";
    s=s-2;
    cout<<endl;
}
int f=n/3;
for(int i=n/3;i<p;i++)
{
    for(int i=0;i<f;i++)
        cout<<" ";
    cout<<"*"<<endl;
}

}
