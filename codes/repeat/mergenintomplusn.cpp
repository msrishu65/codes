#include<iostream>
using namespace std;
int main()
{
int a[7]={2,-1,7,-1,-1,10,-1};
int b[4]={5,8,12,14};
int j=6,i=6;
while(i>0)
{
    while(a[j]!=-1)
        j--;
    while(a[i]==-1)
        i--;
    a[j]=a[i];
    a[i]=-1;
    i--;
    j--;
}
//cout<<j;
int k=0;
j++;
i=0;
//cout<<i<<" "<<a[j]<<endl;
while(i<7)
{
if(a[j]>b[k])
{
    a[i]=b[k];
    k++;
}
else
{
    a[i]=a[j];
    j++;
}
i++;
}
for(int i=0;i<7;i++)cout<<a[i]<<" ";
}
