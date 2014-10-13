#include<iostream>
using namespace std;
long long power(int n)
{
   long long temp;
    if( n == 0)
        return 1;
    temp = power(n/2);
    if (n%2 == 0)
        return temp*temp;
    else
        return 2*temp*temp;
}
int main()
{
    int t,n;
    cin>>t;
    long long s;
    while(t--)
    {
         cin>>n;
            s=power(n+1);
            cout<<s-3<<endl;
     }
}
