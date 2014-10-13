#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
if(n && !(n&(n-1)))
   {
       int c=0;
       while(n>1)
    {
        n=n>>1;
        c++;
    }
    if(c%2==0)
        cout<<"yes";
    else
        cout<<"no";
   }
   else
    cout<<"no";


}
