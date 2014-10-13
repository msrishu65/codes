#include<iostream>
using namespace std;
int all9s(int a[])
{
    int n=5;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=9)
            return 0;
    }
    return 1;
}
void palindrome(int a[])
{
         int n=5;
    if(all9s(a))
    {
      cout<<"1";
      for(int i=0;i<n-1;i++)
            cout<<"0";
      cout<<"1";
      return;
    }
   int l=n/2-1;
   int r;
   if(n%2==0)
    r=n/2;
   else
    r=n/2+1;
   while(a[l]==a[r])
   {
       l--;
       r++;
   }
   if(l<0)
   {

       if(n%2==0)
       {
        a[n/2]++;
           a[n/2+1]++;
       }
       else
       {
        a[n/2]++;
       }
       for(int i=0;i<n;i++)
        cout<<a[i];
       return;
   }
}
int main()
{
int a[]={1,2,3,2,1};
palindrome(a);

}
