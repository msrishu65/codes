#include<iostream>
using namespace std;
int main()
{
int a[]={1, 4, 45, 6, 0, 19};
int x=51;
int s=0;
int start=0;
int end=0;
int m=99;
for(int i=0;i<6;i++)
{
s=s+a[i];
end=i;
if(s>x)
{
  if(end-start<m)
   {
    m=end-start;
    while(s>x)
    {
        s=s-a[start];
        start++;
    }
    }
}
}
cout<<m;
}
