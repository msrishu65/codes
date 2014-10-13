#include<iostream>
using namespace std;
int countstrings(int n)
{
    if(n==0)
        return 0;
    return countstrings(n-1)+2;
}
int main()
{
    int n;
    cin>>n;
    cout<<countstrings(n);
}
