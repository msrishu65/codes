#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int randomize(int a[],int n)
{
srand(time(NULL));
for(int i=0;i<n;i++)
{
int j=rand()%(i+1);
int t=a[i];
a[i]=a[j];
a[j]=t;
}
}
int main()
{
int a[]={1,2,3,4,5,6};
randomize(a,6);
for(int i=0;i<6;i++)cout<<a[i]<<" ";

}
