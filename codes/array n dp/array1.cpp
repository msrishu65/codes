#include<iostream>
using namespace std;
int main()
{
    int n;
cin>>n;

 int a[] = {1, 4, 45, 6, 10, -8};
int l=0;int r=5;
/*while(l<r)
{
    if(a[l]+a[r]==n)
    {
     cout<<a[l]<<" "<<a[r];
break;
    }
    else if(a[l]+a[r]>n)
    {
        r--;
    }
    else
        l++;
}*/
int b[999]={0};
for(int i=0;i<6;i++)
{
    if(b[n-a[i]]==1)
    {
        cout<<n-a[i]<<" "<<a[i];
        return 0;
    }
    else
        b[a[i]]=1;
}
    return 0;
}

