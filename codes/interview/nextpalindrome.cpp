#include<iostream>
using namespace std;
int isall9s(int a[],int n)
{
    for(int i=0;i<n;i++)
        if(a[i]!=9)
        return 0;
    return 1;
}
void nextpalindrome(int a[],int n)
{
int mid=n/2;
int left=mid-1;
int right=(n%2==0)?mid:mid+1;
while(left>=0 && a[left]==a[right])
{
    left--;
    right++;
}
int f;
if(left<0 || a[left]<a[right])
    f=1;
while(left>=0)
{
    a[right]=a[left];
    right++;
    left--;
}
if(f)
{
 int c=1;
 if(n%2==1)
 {
     a[mid]+=c;
     c=a[mid]/10;
     a[mid]=a[mid]%10;
     right=mid+1;
 }
 else
    right=mid;
 while(left>=0)
 {
     a[left]+=c;
     c=a[left]/10;
     a[left]=a[left]%10;
     a[right]=a[left];
     left--;
     right++;
 }
}
for(int i=0;i<5;i++)
    cout<<a[i];
}
int main()
{
    int a[5]={1,2,3,4,5};
    int n=5;
    if(isall9s(a,n))
    {
        cout<<"1";
        for(int i=0;i<n-1;i++)
            cout<<"0";
        cout<<"1";
    }
    else
    {
        nextpalindrome(a,n);
    }
}
