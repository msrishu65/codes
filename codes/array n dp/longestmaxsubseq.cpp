#include<iostream>
using namespace std;
int main()
{
int a[8];
int b[8];
for(int i=0;i<8;i++)
{cin>>a[i];
b[i]=a[i];
}

for(int i=1;i<8;i++)
{
  for(int j=0;j<i;j++)
   {
     if(a[i]>a[j] && b[i]<b[j]+a[i])
         b[i]=b[j]+a[i];
     }
   }

int m=0;
for(int i=0;i<8;i++)
{
    if(b[i]>m)
        m=b[i];
}
cout<<m<<endl;
}
