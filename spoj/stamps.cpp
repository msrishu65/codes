#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{

    int t,n;
    unsigned long long s;
    cin>>t;
    vector<int >a;
    int j=0;
    while(t--)
    {
        j++;
        cin>>s>>n;
        a.clear();
        a.resize(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        reverse(a.begin(),a.end());
        unsigned long long c=0;
        for(int i=0;i<n;i++)
        {
            c=c+a[i];
            if(c>=s)
            {
                cout<<"Scenario #"<<j<<":"<<endl;
                cout<<i+1<<endl;
//                cout<<endl;
                break;
            }
        }
        if(c<s)
        {
            cout<<"Scenario #"<<j<<":"<<endl;
            cout<<"impossible"<<endl;
        }
        if(t)
            cout<<endl;
    }
}
