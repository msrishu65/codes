#include<iostream>
using namespace std;
int findnoofzeroes(int a[],int start,int end)
{
    if(start<end)
    {
        int mid=(start+end)/2;
        if(a[mid]==0)
        {
            return (end-mid)+findnoofzeroes(a,start,mid-1);
        }
        if(a[mid]==1)
            return findnoofzeroes(a,mid+1,end);
    }
}
int main()
{
int a[]={1,1,1,1,0,0};
cout<<findnoofzeroes(a,0,5);

}
