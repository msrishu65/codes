#include<iostream>
using namespace std;
int main()
{
    int a[]={10, 22, 9, 93, 21, 50, 41, 60, 80 };
    int l[9]={1};
    for(int i=1;i<9;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(a[j]<a[i] && l[i]<l[j]+1)
                l[i]=1+l[j];
        }
        //cout<<l[i]<<endl;
    }
    int m=0;
    for(int i=0;i<9;i++)
    {
        if(l[i]>m)
            m=l[i];
    }
    cout<<m;
    //cout<<l[8];
}
