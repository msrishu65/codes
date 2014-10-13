#include<iostream>
using namespace std;
int main()
{
 int a[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
int i=0,j=8;
while(i<j)
{
    while(a[i]>0)
        i++;
    while(a[j]<0)
        j--;
//        cout<<a[i]<<" "<<a[j]<<endl;
        if(i<j)
        {
    int t=a[i];
    a[i]=a[j];
    a[j]=t;
    i++;
    j--;
//        cout<<j<<" ";
        }
}
int f=0;
for(i=0;i<9;i++)
{
    cout<<a[i]<<" ";
    if(a[i]<0)
    {
        if(f==0)
        {
        j=i;f=1;
        }
    }
}
i=0;

while(j<9)
{
    int t=a[i+1];
    a[i+1]=a[j];
    a[j]=t;
    j++;
    i=i+2;
}
cout<<endl;
for(i=0;i<9;i++)cout<<a[i]<<" ";

}
