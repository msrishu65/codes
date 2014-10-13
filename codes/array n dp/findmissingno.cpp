#include<iostream>
using namespace std;
int main()
{
int a[]={1, 2, 4, 5, 6};
int x=a[0],y=1;
for(int i=1;i<5;i++)
x=x^a[i];
for(int i=2;i<7;i++)
y=y^i;
x=x^y;
cout<<x;
return 0;
}
