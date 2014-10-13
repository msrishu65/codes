#include<iostream>
#include<limits.h>
#include<cstring>
using namespace std;

int kadane(int *s,int *start,int *end)
{
    int sum=0;
    int maxsum=INT_MIN;
    *end=-1;
    int lc=0;
    for(int i=0;i<4;i++)
    {
        sum+=s[i];
        if(sum<0)
        {
            sum=0;
            lc=i+1;
        }
        else if(sum>maxsum)
        {
            maxsum=sum;
            *start=lc;
            *end=i;
        }
    }
    if(*end!=-1)
        return maxsum;
    maxsum=s[0];
    *start=*end=0;
    for(int i=1;i<4;i++)
    {
        if(s[i]>maxsum)
        {
            maxsum=s[i];
            *start=*end=i;
        }
    }
    return maxsum;
}
int main()
{
int a[4][5]= {{1, 2, -1, -4, -20},
              {-8, -3, 4, 2, 1},
              {3, 8, 10, 1, 3},
              {-4, -1, 1, 7, -6}
             };
int temp[4];
int sum;
int start,end,left,right,maxsum=INT_MIN,fstart,fend;
for(int i=0;i<5;i++)
{
    memset(temp,0,sizeof(temp));
    for(int j=i;j<5;j++)
    {
        for(int k=0;k<4;k++)
            temp[k]+=a[k][j];
        sum=kadane(temp,&start,&end);
        if(sum>maxsum)
        {
            maxsum=sum;
            left=i;
            fstart=start;
            right=j;
            fend=end;
        }
    }
}
cout<<fstart<<" "<<left<<endl;
cout<<right<<" "<<fend<<endl;
cout<<"sum is"<<maxsum;
}
