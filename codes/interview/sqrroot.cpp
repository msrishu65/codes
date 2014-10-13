#include<iostream>
using namespace std;
float sqrt(float n,float start,float end)
{
    if(start+1<end)
    {
        float mid=(start+end)/2;
        if(mid*mid<n)
            return sqrt(n,mid+1,end);
        else
            return sqrt(n,start,mid-1);
    }
    return start;
}
int main()
{
float n;
cin>>n;
float f=sqrt(n,0,n+1);
cout<<f;
}
