#include<iostream>
using namespace std;
int main()
{
    //wrong code
int a[]= {-1, -3, -10, 0, 60};
int minproduct=1,maxproduct=1,cur=1;
for(int i=0;i<5;i++)
{
   if((cur*a[i])>maxproduct)
    maxproduct=cur*a[i];
    if((minproduct*a[i])>maxproduct)
        maxproduct=minproduct*a[i];
   if((cur*a[i])<0)
    minproduct=cur*a[i];
   cur=cur*a[i];
}
cout<<maxproduct;
}
