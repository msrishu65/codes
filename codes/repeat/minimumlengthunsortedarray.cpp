#include<iostream>
using namespace std;
int main()
{
int a[]={10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60};
int first,end,max=a[0],f=0;
for(int i=1;i<12;i++)
{
if(a[i]>max)
max=a[i];
if(a[i]<max)
{
if(f==0)
{
first=a[i];
f=1;
}
else
end=i;
}
}
int i=0;
while(i<12)
{
    if(a[i]>first)
    {
        first=i;
        break;
    }
    i++;
}
cout<<first<<" "<<end;
}
