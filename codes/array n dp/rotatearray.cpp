#include<iostream>
using namespace std;
void reverse(int a[],int i,int j)
{
while(i<j)
{
    int t=a[i];
    a[i]=a[j];
    a[j]=t;
    i++;
    j--;
}
}
int main()
{
int a[]={1,2,3,4,5,6,7};
int d;
cin>>d;
reverse(a,0,d-1);
reverse(a,d,6);
reverse(a,0,6);
for(int i=0;i<7;i++)
    cout<<a[i]<<" ";

}
