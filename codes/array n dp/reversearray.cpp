#include<iostream>
using namespace std;
int main()
{
int a[6]={1,2,3,4,5,6};
int i=0;int j=5;
while(i<=j)
{
    int n=a[i];
a[i]=a[j];
a[j]=n;
i++;j--;
}
for(int i=0;i<6;i++)cout<<a[i];
return 0;
}
