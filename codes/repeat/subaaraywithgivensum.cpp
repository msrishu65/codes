#include<iostream>
using namespace std;
int main()
{
int a[]={1, 4, 20, 3, 10, 5};
int j=0;
int x=33;
int sum=0;
 for(int i=0;i<6;i++)
 {
   sum=sum+a[i];
   if(sum>x)
    {
      while(sum>x)
       {
         sum=sum-a[j];
         j++;
       }
    }
    if(sum==x)
    {
     cout<<j<<" "<<i;
     return 0;
    }
 }
return 0;

}
