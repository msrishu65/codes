#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int x,y,n;
    while(t--)
    {
        cin>>n;
        int c=0;
        int a=1;
        int s=0;
        while(s<n)
        {
            s=s+a;
            a++;
            c++;
        }
            a=(s-c)+1;
        if(c%2)
        {
            x=c;
            y=1;
            while(a<n)
            {
                a++;
                x--;
                y++;
            }
            cout<<"TERM "<<n<<" IS "<<x<<"/"<<y<<endl;
        }
        else
        {
            x=1;
            y=c;
            while(a<n)
            {
                a++;
                x++;
                y--;
            }
            cout<<"TERM "<<n<<" IS "<<x<<"/"<<y<<endl;
        }
    }
}
