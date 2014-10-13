#include<iostream>
using namespace std;
int main()
{

    unsigned long long n,m;
    cin>>n;
    while(1)
    {
        if(n<=1)
        {
            cout<<"TAK"<<endl;
            break;
        }
        if(n%2==0)
            {
                m=n;
                n=n/2;
            }
        else
            n=3*n+3;
        if(n==2*m)
        {
            cout<<"NIE"<<endl;
            break;
        }
    }
}
