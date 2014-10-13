#include<iostream>
using namespace std;
int main()
{
int a[] = {0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15};
int b[16];
int c[16];
for(int i=0;i<16;i++)
{
//cin>>a[i];
b[i]=1;
c[i]=1;
}
for(int i=1;i<16;i++)
{
for(int j=0;j<i;j++)
{
if(a[i]>a[j] && b[i]<b[j]+1)
   b[i]=b[j]+1;
}
}

for(int i=1;i<16;i++)
{
for(int j=0;j<i;j++)
{
if(a[i]<a[j] && c[i]<c[j]+1)
{
    c[i]=c[j]+1;
}
}
}
int m=0;
for(int i=0;i<16;i++)
    {
        //cout<<endl<<b[i]<<" "<<c[i]<<endl;
    if(m<b[i]+c[i])
        m=b[i]+c[i];
    }

cout<<m-1;
return 0;
}
