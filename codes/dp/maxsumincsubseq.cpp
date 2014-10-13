#include<iostream>
using namespace std;
int main()
{
    int a[]= {1, 100, 2, 3, 101, 4, 5};
    int m[7];
    for(int i=0;i<7;i++)
        m[i]=a[i];
    for(int i=1;i<7;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(a[j]<a[i] && m[i]<m[j]+a[i])
                m[i]=m[j]+a[i];
        }
        cout<<m[i]<<endl;
    }
}
