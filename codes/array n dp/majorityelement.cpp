#include<iostream>
using namespace std;
int main()
{
int a[5];

for(int i=0;i<5;i++)cin>>a[i];
int count=1,mi=0;
for(int i=1;i<5;i++)
{
if(a[mi]==a[i])
count++;
else count--;
if(count==0) mi=i;
}
if(count>0)
{
int c=0;
for(int i=0;i<5;i++)
{
if(a[mi]==a[i]) c++;
}

if(c>2)
cout<<a[mi]<<endl;
}
}


