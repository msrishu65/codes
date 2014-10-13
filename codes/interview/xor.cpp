#include<iostream>
using namespace std;
int main()
{
    int a[]={2,4,7,9,2,4};
int Xor=(2^4^7^9^2^4);
int s=Xor & ~(Xor-1);
int x=0,y=0;
for(int i=0;i<6;i++)
{
    if(s&a[i])
        x=x^a[i];
    else
        y=y^a[i];
}
cout<<x<<y;
}
