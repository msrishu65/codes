#include<iostream>
using namespace std;
int main()
{
int a[]={2, 5, 3, 5, 4, 4, 2, 3};
int p=0;
int x=2,y=3;
int min=999;
int i;
for(i=0;i<8;i++)
{
    if(a[i]==x || a[i]==y)
    {
           p=i;
           break;
    }
}
for(int k=i+1;k<8;k++)
{
    if(a[k]==x || a[k]==y)
    {
        if(a[k]!=a[p] && k-p<min)
        {
            min=k-p;
            p=k;
        }
        else
            p=k;
    }
}
cout<<min;
return 0;
}
