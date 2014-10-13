#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;

int main()
{
    int t=50;
    freopen("new.txt","w",stdout);
    cout<<t<<endl;

    while(t--)
    {
        int n=rand()%1000;
        cout<<n<<endl;

        for(int i=0;i<n;i++)
        {
            cout<<-300+rand()%1000<<" ";


        }

        cout<<"\n";
        for(int i=0;i<n;i++)
        {
            cout<<-1000+rand()%1000<<" ";


        }

        cout<<"\n";

    }





}
