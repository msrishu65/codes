#include<iostream>
using namespace std;
int main()
{
int a[]={1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
int i=0;
int j=11;
while(i<j)
{
    while(a[i]!=0)
        i++;
    while(a[j]==0)
        j--;
    if(i<j)
    {
        a[i]=a[j];
        a[j]=0;
        i++;j--;
    }
}
for(int i=0;i<12;i++)cout<<a[i]<<" ";
}
