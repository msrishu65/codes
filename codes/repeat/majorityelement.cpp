#include<iostream>
using namespace std;
int main()
{
 int a[] = {1, 3, 3, 1, 1};
int cur=0,c=1;
for(int i=1;i<5;i++)
{
    if(a[cur]==a[i])
        c++;
    else
        c--;
    if(c==0)
        {
            c=1;
            cur=i;
        }
}
if(c>0)
{
    c=0;
    for(int i=0;i<5;i++)
    {
        if(a[i]==a[cur])
        c++;
    }
    if(c>2)
        cout<<a[cur];
}
}
