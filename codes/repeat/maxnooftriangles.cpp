#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int a[]= {10, 21, 22, 100, 101, 200, 300};
sort(a,a+7);
int c=0;
for(int i=0;i<5;i++)
{
for(int j=i+1;j<6;j++)
{
int k=j+1;
while(a[i]+a[j]>a[k] && k<7)
k++;
c=c+(k-j-1);
}

}
cout<<c;

}
