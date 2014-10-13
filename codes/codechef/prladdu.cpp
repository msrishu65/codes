#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        vector<int>pos;
        vector<int>neg;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]<0)
                neg.push_back(i);
            else
                pos.push_back(i);
        }
        unsigned long long s=0;
        int i=0,j=0;
        while(i<pos.size() && j<neg.size())
        {
            int k=pos[i],l=neg[j];
            int m=min(abs(a[k]),abs(a[l]));
            s=s+abs(k-l)*m;
            //cout<<m<<" "<<i<<" "<<j<<" "<<k<<" "<<l<<" "<<s<<endl;
            if(a[k]>abs(a[l]))
            {

                a[k]+=a[l];
                j++;
            }
            else if(a[k]<abs(a[l]))
            {
                a[l]+=a[k];
                i++;
            }
            else
            {
                i++;
                j++;
            }
        }
        cout<<s<<endl;
    }
}
