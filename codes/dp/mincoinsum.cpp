#include<iostream>
using namespace std;
int main()
{
    int a[]={1,3,5};
    int s=11;
    int m[12];
    for(int i=1;i<12;i++)
        m[i]=99999;
    m[0]=0;
    for(int i=1;i<=s;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(a[j]<=i && m[i-a[j]]+1<m[i])
                m[i]=m[i-a[j]]+1;
        }
        cout<<m[i]<<endl;
    }

}
