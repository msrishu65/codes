#include<iostream>
using namespace std;
int main()
{
int a[]={1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0};
int c=0;
int i;
for(i=0;i<11;i++)
{
if(a[i]!=0)
{
a[c]=a[i] ;
c++;
}
}
for(int j=c;j<11;j++)
    a[j]=0;
for(int i=0;i<11;i++)
cout<<a[i]<<" ";
}
