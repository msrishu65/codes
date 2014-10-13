#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(a==0 || b==0)
        return 0;
    if(a%b==0)
        return b;
    if(b%a==0)
        return a;
    if(a<b)
        return gcd(a,b%a);
    if(b<a)
        return gcd(b,a%b);
}
int lcm2(int a,int b)
{
    return (a*b)/gcd(a,b);
}
int lcm(int l[],int n)
{
    if(n==2)
        return lcm2(l[0],l[1]);
    return lcm2(lcm(l,n-1),l[n-1]);
}
int main()
{
int a[]={1,2,3,4,5};
int p[]={2,3,1,5,4};
int l[5];
for(int i=0;i<5;i++)
{
    int c=1;
    int d=p[a[i]-1];
    while(d!=a[i])
    {
        c++;
        d=p[d-1];
    }
    l[i]=c;
}
cout<<lcm(l,5);
}
