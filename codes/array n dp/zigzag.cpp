#include<bits/stdc++.h>
using namespace std;
int a[222],ans[222][2];
int main()
{
int n;cin>>n;
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
for(int i=0;i<n;i++)
{
    ans[i][0]=1;
    ans[i][1]=1;
}
for(int i=1;i<n;i++)
{
    for(int j=i-1;j>=0;j--)
    {
        if(a[i]>a[j]) ans[i][1]=max(ans[i][1],ans[j][0]+1);
        else if(a[i]<a[j])
        {
            ans[i][0]=max(ans[i][0],ans[j][1]+1);
         }
    }
}
    int m=INT_MIN;
for(int i=0;i<n;i++)
{
 if(ans[i][0]>m) m=ans[i][0];
    if(ans[i][1]>m) m=ans[i][1];
    }

    cout<<endl<<m;
    return 0;
}
