#include<iostream>
using namespace std;
int main()
{
 int a[7]={12,11,10,5,6,2,30};
 int b[7],c[7];
 int min=0;int max=6;
 b[0]=-1;
 c[6]=-1;
 for(int i=1;i<7;i++)
 {
     if(a[i]<a[min])
     {
         b[i]=-1;
         min=i;
     }
     else
        b[i]=min;
 }
 for(int i=5;i>=0;i--)
 {
     if(a[i]>max)
     {
         c[i]=-1;
         max=i;
     }
     else
        c[i]=max;
 }
 //cout<<"yo";
 for(int i=0;i<7;i++)
 {
     if(b[i]!=-1 && c[i]!=-1)
        {
            cout<<a[b[i]]<<" ";
            cout<<a[i]<<" ";
            cout<<a[c[i]];
            return 0;

        }
 }
}
