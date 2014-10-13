#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int a[]={1, 4, 45, 6, 10, 8};
    int sum = 22;
sort(a,a+6);
    for(int i=0;i<6;i++)
    {
    int k=5;
    int j=i+1;
    while(j<k)
    {
    if(a[i]+a[j]+a[k]==sum)
    {
    cout<<a[i]<<" "<<a[j]<<" "<<a[k];
    return 0;
    }
    else if(a[i]+a[j]+a[k]<sum)
    j++;
    else
    k--;
    }
    }
}
