#include<iostream>
using namespace std;
int main()
{
    int a[7]={1, -2, -3, 0, 7, -8, -2};
    //int maxprd=1,minprd=1;
   // int mx=1;
   int maxp=0,cp=1,tp=1;
   for(int i=0;i<7;i++)
   {
       cp*=a[i];
       tp*=a[i];
       if(cp==0)
       {
           cp=tp=1;
       }
       maxp=max(maxp,max(cp,tp));
       if(cp<0)
          tp=1;
   }

    cout<<maxp;
}
