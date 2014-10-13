#include<iostream>
using namespace std;
int main()
{
 int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
int max=0;
int curmax=0;
for(int i=0;i<8;i++)
{
    curmax=curmax+a[i];
    if(curmax>max)
    {
        max=curmax;
    }
    if(curmax<0)
        curmax=0;
}
cout<<max;
return 0;
}
