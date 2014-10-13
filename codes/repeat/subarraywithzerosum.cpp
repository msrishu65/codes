#include<iostream>
using namespace std;
int main()
{
int a[]={4, 2, -3, 1, 6};
int s=0;
int b[10]={0};
for(int i=0;i<5;i++)
{
s=s+a[i];
if(b[s]==1 || a[i]==0|| s==0)
{
    cout<<"yo";
    return 0;
}
b[s]=1;
}
}
