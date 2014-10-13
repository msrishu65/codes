#include<iostream>
using namespace std;
int firstone(int a[4][4],int start,int end,int i)
{
if(start<=end)
{
int mid=(start+end)/2;
if(a[i][mid]==1 && a[i][mid-1]==0)
return mid;
else if(a[i][mid]==0)
return firstone(a,mid+1,end,i);
else
return firstone(a,start,mid-1,i);
}
}
int main()
{
int m[4][4] = {{0, 0, 0, 1},
                 {0, 1, 1, 1},
                 {1, 1, 1, 1},
                 {0, 0, 0, 0}
                };
                int max=0;
                for(int i=0;i<4;i++)
                {
                int n=firstone(m,0,3,i);
                if((4-n)>max)
                {
                max=4-n;
                }
                }
                cout<<max;


}
