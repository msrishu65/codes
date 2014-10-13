#include<iostream>
using namespace std;
int main()
{
int a[]={1, 8, 30, 40, 100};
int i=0,j=1;
int n;
cin>>n;
while(i<5 && j<5)
{
    if(a[j]-a[i]==n)
    {
        cout<<a[i]<<" "<<a[j];
        break;
    }
    else if(a[j]-a[i]>n)
    {
        i++;
    }
    else
        j++;
}
}
