#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
int a[]={3, 5, 4, 2, 6, 5, 6, 6, 5, 4, 8, 3};
int first=-1,last=-1,m=9999;
int x=3,y=6;
int i=0;
while(i<12)
{
if(a[i]==x)
first =i;
if(a[i]==y)
last=i;
if(first!=-1 && last!=-1)
{
    m=abs(last-first);
    break;
}
i++;
}
for(int j=i+1;j<12;j++)
{
    if(a[j]==x)
     first =j;
    if(a[j]==y)
     last=j;
    m=min(abs(last-first),m);
}
cout<<m;
}
