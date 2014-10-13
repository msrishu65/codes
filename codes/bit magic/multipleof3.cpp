#include<iostream>
using namespace std;
int ismultipleof3(int n)
{
    if(n<0)
        n=-n;
    if(n==0)
        return 1;
    if(n==1)
        return 0;
    int oc=0,ec=0;
    while(n>0)
    {
        if(n&1)
            oc++;
        n=n>>1;
        if(n&1)
            ec++;
        n=n>>1;
    }
    return ismultipleof3(oc-ec);
}
int main()
{
int n;
cin>>n;
if(ismultipleof3(n))
    cout<<"yes";
else
    cout<<"no";

}
