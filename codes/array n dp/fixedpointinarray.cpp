#include<iostream>
using namespace std;
int fixedpoint(int a[],int start,int end)
{
    if(start<=end)
    {
      int mid=(start+end)/2;
        if(a[mid]==mid)
            return mid;
        if(mid>a[mid])
            return fixedpoint(a,mid+1,end);
        else
            return fixedpoint(a,start,mid-1);

    }
    return -1;
}
int main()
{
int a[]={-10, -1, 0, 3, 10, 11, 30, 50, 100};
cout<<fixedpoint(a,0,8);
return 0;



}
