#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
int a[]={1, 2, 7, 6, 8, -1, -10, 15};
int i=0,j=7;
while(i<=j)
{
while(a[i]>0)
i++;
while(a[j]<0)
j--;
if(i<j)
{
int t=a[i];
a[i]=a[j];
a[j]=t;
i++;
j--;
}
}

for(int i=0;i<j;i++)
{
    if(a[abs(a[i])-1]>0)
        a[abs(a[i])-1]=-a[abs(a[i])-1];
}
for(int i=0;i<j;i++)
{
    if(a[i]>0)
    {
        cout<<i+1;
        return 0;
    }
}


}
