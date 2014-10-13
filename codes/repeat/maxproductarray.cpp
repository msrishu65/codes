#include<iostream>
using namespace std;
int main()
{
int a[]={6, -3, -10, 0, 2};
int minp=1;
int maxp=1;
int maxop=1;
for(int i=0;i<5;i++)
{
if(a[i]>0)
{
maxp=maxp*a[i];
minp=min(minp*a[i],1);
}
else if(a[i]==0)
{
minp=1;
maxp=1;
}
else
{
    int t=maxp;
maxp=max(1,minp*a[i]);
minp=t*a[i];
}
if(maxop<maxp)
{
maxop=maxp;
//cout<<maxop<<endl;
}
}
cout<<maxop;

}
