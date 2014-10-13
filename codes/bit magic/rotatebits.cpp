#include<iostream>
using namespace std;
int leftrotate(int n,int d)
{
    return (n<<d)|(n>>(4-d));
}
int rightrotate(int n,int d)
{
    return (n>>d)|(n<<(4-d));
}
int main()
{
    int n,d;
    cin>>n>>d;
    cout<<leftrotate(n,d)<<endl;
    cout<<rightrotate(n,d)<<endl;
}
