#include<iostream>
using namespace std;
int minremoval(int a[],int start,int end)
{
    if(start>end)
        return 0;
    if(start==end)
        return 0;
    if(start==end-1)
    {
        int x=2*min(a[start],a[end]);
        int y=max(a[start],a[end]);
        if(x>y)
            return 0;
        else
            return 1;
    }
    return min(minremoval(a,start,end-1),minremoval(a,start+1,end))+1;
}
int main()
{
int a[]={4, 5, 100, 9, 10, 11, 12, 15, 200};
cout<<minremoval(a,0,8);
}
