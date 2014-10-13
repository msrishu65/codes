#include<iostream>
using namespace std;
int main()
{
int s=4;
int a[]={1,2,3};
int m[5]={0};
m[0]=1;
for(int i=0;i<3;i++)
{
   for(int j=a[i];j<=s;j++)
   {
          m[j]=m[j-a[i]]+m[j];

   }
}
cout<<m[4];
}
