#include<iostream>
using namespace std;
int maxsum(int a[],int start,int end)
{
if(start>end)
    return 0;
   return max(maxsum(a,start+1,end-1)+a[start],maxsum(a,start+1,end-1)+a[end]);
              //max(maxsum(a,start+1,end)+a[start],maxsum(a,start,end-1)+a[end]));
}
int greedy(int b[],int start,int end)
{
    if(start>end)
        return 0;
    if(b[start]>=b[end])
        return greedy(b,start+1,end-1)+b[start];
    else
        return greedy(b,start+1,end-1)+b[end];
}
int main()
{
int a[]={3,2,10,4};
cout<<maxsum(a,0,3);
cout<<endl;
int b[]={3,2,10,4};
cout<<greedy(b,0,3);
}
