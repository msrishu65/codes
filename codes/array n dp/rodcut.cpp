#include<iostream>
using namespace std;
int main()
{
int a[100];
int b[100];
int n;
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>a[i];
    b[i]=0;
}
b[0]=a[0];
for(int i=1;i<n;i++)
{
for(int j=0;j<i;j++)
{
if(a[j]+b[i-j-1]>a[i])
    b[i]=a[j]+b[i-j-1];
    else if(a[i]>b[i])
        b[i]=a[i];
}
}
    cout<<b[n-1];
return 0;

}
