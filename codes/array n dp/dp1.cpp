#include<iostream>
using namespace std;
int main()
{
int a[10];
for(int i=0;i<10;i++)
cin>>a[i];
int max,sum=0;
max=0;
for(int i=0;i<10;i++)
{
sum=sum+a[i];
if(sum<0)
sum=0;
if(sum>max)
max=sum;
}
cout<<endl<<max;
return 0;
}
