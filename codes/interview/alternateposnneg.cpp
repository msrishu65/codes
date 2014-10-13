#include<iostream>
using namespace std;
int main()
{
int a[]={1,2,3,-4,5,6,-7,-8};
int i=-1;
int j=0;
while(j<8)
{
    if(a[j]<0)
    {
        i++;
        int t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    j++;
}
int pos=i+1;
int n=0;
while(pos<8 && n<pos && a[n]<0)
{
    int t=a[n];
    a[n]=a[pos];
    a[pos]=t;
    pos++;
    n=n+2;
}
for(int i=0;i<8;i++)
    cout<<a[i]<<" ";
}
