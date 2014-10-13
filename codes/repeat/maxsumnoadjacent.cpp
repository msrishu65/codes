#include<iostream>
using namespace std;
int main()
{
int a[]={5,  5, 10, 40, 50, 35};
int inc=a[0],exc=0;
int maxsum=inc;
for(int i=1;i<6;i++)
{
    int m=max(inc,exc);
    inc=a[i]+exc;
    exc=m;
}
cout<<max(inc,exc);

}
