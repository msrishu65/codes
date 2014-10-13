#include<iostream>
#include<algorithm>
#include<stdlib.h>
using namespace std;
struct pairsum
{
 int first;
 int second;
 int sum;
};
int compare (const void *a, const void * b)
{
    return ( (*(pairsum *)a).sum - (*(pairsum*)b).sum );
}
int nocommon(pairsum a,pairsum b)
{
    if(a.first==b.first || a.first==b.second || a.second==b.first ||a.second==b.second)
    {
        return 0;
    }
    return 1;
}

int main()
{
pairsum pair[15];
int a[] = {10, 20, 30, 40, 1, 2};
int k=0;
for(int i=0;i<6;i++)
{
    for(int j=i+1;j<6;j++)
    {
        pair[k].sum=a[i]+a[j];
        pair[k].first=i;
        pair[k].second=j;
        k++;
    }
}
int n=91;
int i=0,j=14;
qsort(pair,15, sizeof(pair[0]), compare);
 while(i<j)
 {
     if(pair[i].sum+pair[j].sum==n && nocommon(pair[i],pair[j]))
     {
         cout<<a[pair[i].first]<<" "<<a[pair[i].second]<<" "<<a[pair[j].first]<<" "<<a[pair[j].second];
     break;
          }
     else if(pair[i].sum+pair[j].sum<n)
        i++;
     else j--;
 }
}
