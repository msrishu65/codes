#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
    {
    int t,n;
    cin>>t;
    while(t--)
        {
        cin>>n;
        int b[n],a[n];
        for(int i=0;i<n;i++)
            cin>>b[i];
        a[0]=0;
        a[1]=max(abs(b[1]-b[0]),abs(b[1]-1));
        a[1]=max(a[1],abs(b[0]-1));
        if(b[1]<b[0])
            b[1]=1;
        for(int i=2;i<n;i++)
            {
            a[i]=a[i-1]+max(abs(b[i]-b[i-1]),abs(b[i-1]-1));
            if(b[i]<b[i-1])
                b[i]=1;
        }
        cout<<a[n-1]<<endl;
    }
}
