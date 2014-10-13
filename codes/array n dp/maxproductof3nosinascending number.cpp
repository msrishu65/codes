#include<iostream>
using namespace std;
//have better method u noob
int lefgreat(int a[],int k)
{int max=-1;
    for(int j=0;j<k;j++)
    {
        if(a[j]<a[k] && a[j]>max)
            max=a[j];
    }
    return max;
}
int rightgreat(int a[],int k)
{int max=-1;
    for(int j=4;j>k;j--)
    {
        if(a[j]>a[k] && a[j]>max)
            max=a[j];
    }
    return max;
}
int main()
{
int a[] = {1, 5, 10, 8, 9};
int m=0;
for(int i=1;i<5;i++)
{
    int l=lefgreat(a,i);
    int r=rightgreat(a,i);

    if(l && r)
    {
        //6cout<<l<<" "<<r<<endl;
        if(l*a[i]*r>m)
            m=l*a[i]*r;
    }
}
cout<<m;
}
