#include<iostream>
using namespace std;
int main()
{
int a[]={1, 3, 3, 3, 2};
int c=1;int mi=0;
for(int i=1;i<5;i++)
{
 if(a[i]==a[mi])
        c++;
 else
    c--;
 if(c==0)
    {
        mi=i;
        c=1;
     }
}
if(c>0)
{   c=0;
    for(int i=0;i<5;i++)
    {
        if(a[i]==a[mi])
            c++;
    }
    if(c>2)
        cout<<a[mi];
}
return 0;
}
