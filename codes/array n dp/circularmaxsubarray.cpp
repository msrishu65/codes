#include<iostream>
using namespace std;
int kadane(int a[])
{
int ms=0;int curm=0;
for(int i=0;i<9;i++)
{
  curm=curm+a[i];
  if(curm>ms)
    ms=curm;
  if(curm<0)
    curm=0;

}
return ms;
}
int main()
{
    int a[]={11, 10, -20, 5, -3, -5, 8, -13, 10};
    int m1=kadane(a);
int m2=0;
    for(int i=0;i<9;i++)
    {
        m2=m2+a[i];
        a[i]=-a[i];
    }
    m2=m2+kadane(a);
    int m=max(m1,m2);
    cout<<m;
}
