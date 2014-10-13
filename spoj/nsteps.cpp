#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int x,y;
    while(t--)
    {
        cin>>x>>y;
        if((x-y)==2 || x==y)
        {
            if((x%2)==0)
                {
                    cout<<x+y<<endl;
                }
                else
                    cout<<x+y-1<<endl;
        }
        else
            cout<<"No Number"<<endl;
    }
}
