#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
int a[]= {4, 2, 4, 5, 2, 3, 1};
for(int i=0;i<7;i++)
{
if(a[abs(a[i])]>0)
    a[abs(a[i])]=-a[abs(a[i])];
else
    cout<<abs(a[i])<<" ";
}

}
