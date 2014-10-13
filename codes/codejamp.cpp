#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int t,c,i;
cin>>t;
int hash[1000];
for(int j=0;j<1000;j++)
    hash[j]=-1;
int h=1;
while(h<=t)
{
    cin>>c;
    cin>>i;
    int a[i+1];
    for(int j=1;j<=i;j++)
    {
        cin>>a[j];
        hash[a[j]]=j;
    }
    for(int j=1;j<=i;j++)
    {
        if(a[j]<=c && hash[c-a[j]]!=-1)
        {
            cout<<"Case #"<<h<<":"<<" "<<j<<" "<<hash[c-a[j]]<<endl;
            break;
        }
    }
    for(int j=0;j<1000;j++)
    hash[j]=-1;
    h++;
}
}
