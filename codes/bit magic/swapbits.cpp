#include<iostream>
using namespace std;
int main()
{
int n=21;
//n=10101
//n>>1 01010 n>>2 00101 res=10110
int k=2;
k=1<<(k-1);
cout<<(n|k);

}
