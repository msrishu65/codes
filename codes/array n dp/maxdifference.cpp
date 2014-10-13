#include<iostream>
using namespace std;
int main()
{
int a[]={2, 3, 10, 6, 4, 8, 1};
int min=a[0];
int max;
int maxdiff=0;
for(int i=1;i<7;i++)
{
    if(a[i]>max)
        max=a[i];
    if((max-min)>maxdiff)
        maxdiff=max-min;
    if(a[i]<min)
        min=a[i];
}
cout<<maxdiff;
}
