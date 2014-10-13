#include<iostream>
using namespace std;
int main()
{
 int a[]={10, 3, 5, 6, 2};
 int l[5];
 int r[5];
 l[0]=1;
 r[4]=1;
 for(int i=1;i<5;i++)
 {
   l[i]=l[i-1]*a[i-1];
 }
 for(int i=3;i>=0;i--)
 {
     r[i]=r[i+1]*a[i+1];
 }
 for(int i=0;i<5;i++)
    {
    //    cout<<l[i]<<" ";
    }
cout<<endl;
 for(int i=0;i<5;i++)
    {
        cout<<l[i]*r[i]<<" ";
    }
}
