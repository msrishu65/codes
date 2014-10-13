#include<iostream>
using namespace std;
int binarysearch(int ,int);
int f(int x) { return (x*x - 10*x - 20); }
int findpositive()
{
if(f(0)>0)
return 0;
int i=1;
while(f(i)<1)
{
i=i*2;
}
return binarysearch(i/2,i);
}
int binarysearch(int start,int end)
{
if(start<end)
{
int mid=(start+end)/2;
if(f(mid)>0 && f(mid-1)<0)
return mid;
else if(f(mid)<0)
return binarysearch(mid+1,end);
else return binarysearch(start,mid-1);
}

}
int main()
{
cout<<findpositive();

}
