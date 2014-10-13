#include<iostream>
using namespace std;
int main()
{
    int a[]={10000,5000,2000,1000,500,200,100,50,20,10,5};
     int n;
     cin>>n;
     int m[n+1];
     for(int i=0;i<n+1;i++)
        m[i]=0;
     m[0]=1;
     for(int i=0;i<11;i++)
     {
         for(int j=a[i];j<=n;j++)
         {
           m[j]=m[j-a[i]]+m[j];
         }
     }
     cout<<m[n];
}
