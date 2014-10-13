#include<iostream>
using namespace std;
int totalways(int n)
{

    if(n<=2)
        return n;
    return totalways(n-1)+totalways(n-2);
}
int main()
{
int n;
cin>>n;
cout<<totalways(n);
}
