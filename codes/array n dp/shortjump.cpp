#include<iostream>
using namespace std;
int main()
{
int a[11];
int b[11];
for(int i=0;i<11;i++)
cin>>a[i];
b[0]=0;
for(int i=1;i<11;i++)
{
for(int j=0;j<i;j++)
{
    b[i]=88888;
if(i<=j+a[j] && b[j]!=88888)
{
    b[i]=b[j]+1;
     break;
}
}
}
cout<<b[10]<<endl;
return 0;
}
