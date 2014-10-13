#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[6]={5,8,2,7,1,4};
    int n;
    cin>>n;
   sort(a,a+6);
    for(int i=0;i<6;i++)
    {
        int l=i+1,r=5;
        while(l<r)
        {
            if(a[l]+a[r]==n-a[i])
            {
            cout<<a[i]<<" "<<a[l]<<" "<<a[r];
            break;
            }
            else if(a[l]+a[r]<n-a[i])
            {
                l++;
            }
            else
                r--;
        }
    }
    return 0;
}
