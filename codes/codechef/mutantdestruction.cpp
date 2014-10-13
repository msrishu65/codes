#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n>>s;
    string a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<n; i++)
    {
        string r=a[i];
        while(1)
        {
            int j=s.find(r);
            if(j==-1)
                break;
            s.erase(j,r.length());
        }
    }
    cout<<s<<endl;
}
