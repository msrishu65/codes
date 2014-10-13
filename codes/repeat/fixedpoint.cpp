#include<iostream>
using namespace std;
int fixedpoint(int a[],int start,int end)
{
    if(start<end)
    {
        int mid=(start+end)/2;
        if(a[mid]==mid)
            return mid;
        else if(a[mid]>mid)
            return fixedpoint(a,start,mid-1);
        else
            return fixedpoint(a,mid+1,end);
    }
    return -1;
}
int main()
{
int a[]={-10,-5,0,3,7};
cout<<fixedpoint(a,0,4);

}
