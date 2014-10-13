#include<iostream>
using namespace std;
int main()
{
    int a[]={12,11,40,5,3,1};
//int a[]={0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15};
int n=sizeof(a)/sizeof(a[0]);
//cout<<n<<endl;
//cout<<"yo";
int temp[n];
for(int i=0;i<n;i++)
    temp[i]=1;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(a[j]<a[i] && temp[i]<temp[j]+1)
                temp[i]=temp[j]+1;
        }
    }
    int start=0;
    int end=n-1;
    while(start<end)
    {
        int t=a[start];
        a[start]=a[end];
        a[end]=t;
        start++;
        end--;
    }
    int temp2[n];
for(int i=0;i<n;i++)
    temp2[i]=1;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(a[j]<a[i] && temp2[i]<temp2[j]+1)
                temp2[i]=temp2[j]+1;
        }
    }
int m=0;
    for(int i=0;i<n;i++)
    {
        //cout<<temp[i]<<" "<<temp2[i]<<endl;
    if(temp[i]+temp2[i]-1>m)
        m=temp[i]+temp2[i]-1;
    }
    cout<<m;
}
