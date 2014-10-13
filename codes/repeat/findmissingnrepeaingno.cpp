#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
int a[] = {7, 3, 4, 5, 5, 6, 2};
for(int i=0;i<7;i++)
{
if(a[abs(a[i])-1]>0)
{
    a[abs(a[i])-1]=-a[abs(a[i])-1];
}
else
    cout<<abs(a[i]);
}
for(int i=0;i<7;i++)
    {
        if(a[i]>0)
        {
            cout<<i+1;
            return 0;
        }

}
}
