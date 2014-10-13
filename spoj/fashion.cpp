#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int t,n;
    vector<int>a;
    vector<int>b;
    cin>>t;
    while(t--)
    {
        cin>>n;
        a.resize(n);
        a.clear();
        b.resize(n);
        b.clear();
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        sort(a.begin(),a.begin()+n);
        sort(b.begin(),b.begin()+n);
        int x=0;
        for(int i=0;i<n;i++)
        {
            x=x+(a[i]*b[i]);
        }
        cout<<x<<endl;
    }
}
