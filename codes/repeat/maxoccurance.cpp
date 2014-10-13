#include<iostream>
using namespace std;
int main()
{

int a[]={2, 3, 3, 5, 3, 4, 1, 7};
int k=8;
for(int i=0;i<8;i++)
{
a[a[i]%k]=(a[a[i]%k])+k;
}
int m=0,mi=0;
for(int i=0;i<8;i++)
{
    cout<<a[i]<<" ";
/*if(a[i]>m)
{m=a[i];
mi=i;
}*/
}
//cout<<mi;
}
