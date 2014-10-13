#include<iostream>
using namespace std;
int main()
{
int a[]={1,2,2,3,3,4,4};
int x=a[0];
for(int i=1;i<7;i++)
x=x^a[i];
cout<<x;
return 0;
}
