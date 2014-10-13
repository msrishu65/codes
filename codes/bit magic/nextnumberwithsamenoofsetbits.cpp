#include<iostream>
#include<math.h>
using namespace std;
int main()
{

    int p=6;
    int n=p;
    //cin>>n;
     //n=110;
     int c=0;
while((n&1)==0)
    {
        n=n>>1;
        c++;
    }
while(n&1)
   {
     n=n>>1;
     c++;
   }
   //cout<<c<<endl;
   //cout<<(1<<c);
cout<<c;

   //cout<<(p+(1<<c)-(1<<(c-1)));
}
