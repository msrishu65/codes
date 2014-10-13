#include<iostream>
using namespace std;
struct pairs
{
    int a;
    int b;
};
int main()
{
       pairs a[]=  { {5, 24}, {15, 25},{27, 40}, {50, 60} };
       int c[4];
       for(int i=0;i<4;i++)
        c[i]=1;

       for(int i=1;i<4;i++)
       {
           for(int j=0;j<i;j++)
           {
               if(a[j].b<a[i].a && c[i]<c[j]+1)
               {
                   c[i]=c[j]+1;
               }
           }
       }
    for(int i=0;i<4;i++)
    cout<<c[i]<<" ";

}
