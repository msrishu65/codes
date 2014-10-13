#include<iostream>
using namespace std;
int main()
{
 int a[]={16, 17, 4, 3, 5, 2};
 int m=-1;
 for(int j=5;j>=0;j--)
 {
     int t=a[j];
     a[j]=m;
     if(t>m)
        m=t;
 }
 for(int i=0;i<6;i++)cout<<a[i]<<" ";
}
