#include<iostream>
using namespace std;
int main()
{

    int a[]={12, 4, 78, 90, 45, 23};
    int b[6];
    b[0]=1;
    int c[6];
    c[0]=1;
    for(int i=1;i<6;i++)
    {
        if(a[i]>a[i-1])
           b[i]=b[i-1]+1;
            else
            b[i]=1;
    }
    for(int i=1;i<6;i++)
    {
        if(a[i]<a[i-1])
            c[i]=c[i-1]+1;
        else
            c[i]=1;
    }
    int m=0;
    for(int i=0;i<6;i++)
    {
        if(b[i]+c[i]>m)
            m=b[i]+c[i];
    }
    cout<<m+1;

}
