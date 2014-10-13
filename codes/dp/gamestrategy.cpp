#include<iostream>
using namespace std;
int game(int a[],int start,int end)
{
    if(start>end)
        return 0;
    if(start==end)
        return a[start];
    if(start+1==end)
        return max(a[start],a[end]);
    else
    {
        return max(a[start]+min(game(a,start+1,end-1),game(a,start+2,end)),a[end]+min(game(a,start,end-2),game(a,start+1,end-1)));
    }

}
int main()
{
int a[]={ 20, 30, 2, 2, 2, 10};
//cout<<game(a,0,5);
int m[6][6];
for(int i=0;i<6;i++)
    for(int j=0;j<6;j++)
    m[i][j]=0;
for(int i=0;i<6;i++)
    m[i][i]=a[i];
for(int i=0;i<6;i++)
{
    m[i][i+1]=max(a[i],a[i+1]);
}
for(int l=3;l<=6;l++)
{
    for(int i=0;i<7-l;i++)
    {
        int j=i+l-1;
        m[i][j]=max(a[i]+min(m[i+1][j-1],m[i+2][j]),a[j]+min(m[i][j-2],m[i+1][j-1]));
    }
}
cout<<m[0][5];

}
