#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n;

   unsigned long long s,d;
    while(t--)
    {
   cin>>n;
   s=n*(n+1);
   s=s/2;
   d=pow(2,n-1);
   cout<<d*s<<endl;
    }
}
