#include<iostream>
using namespace std;
int main()
{
int a[]={-7,1,5,2,-4,3,0};
int ls=0,rs=0;
for(int i=0;i<7;i++)
rs=rs+a[i];
for(int i=0;i<7;i++)
{
    rs=rs-a[i];
if(ls==rs)
{cout<<i<<" ";
return 0;
}
ls=ls+a[i];

}


}
