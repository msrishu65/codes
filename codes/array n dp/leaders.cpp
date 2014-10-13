#include<iostream>
using namespace std;
void reverse(int a[],int i,int j)
{
while(i<j)
{
    int t=a[i];
    a[i]=a[j];
    a[j]=t;
    i++;
    j--;
}
}
int main()
{
int a[]={16,17,4,3,5,2};
reverse(a,0,5);
int m=0;
for(int i=0;i<6;i++)
{
if(a[i]>m)
{
m=a[i];
cout<<a[i]<<" ";
}
}
return 0;
}
