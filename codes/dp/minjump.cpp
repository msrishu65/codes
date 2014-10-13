#include<iostream>
using namespace std;
int main()
{
int a[]={1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
int m[11];
for(int i=0;i<11;i++)
    m[i]=9999;
m[0]=0;
for(int i=1;i<3;i++)
{
    for(int j=0;j<i;j++)
    {
        if(i<=j+a[j] && m[j]!=9999)
           {
               m[i]=m[j]+1;
               cout<<m[i]<<endl;
               break;
           }
    }
}
//cout<<m[10];
}
