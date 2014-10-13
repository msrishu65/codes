#include<iostream>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int main()
{
int a[]={2,5,2,8,5,6,8,8};
sort(a,a+7);
for(int i=0;i<8;i++)cout<<a[i]<<" ";
}
