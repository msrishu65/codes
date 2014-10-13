#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    while(a||b||c)
    {
        if(b*b==a*c)
        {
            int d=c*(c/b);
            cout<<"GP"<<" "<<d<<endl;
        }
        if(2*b==a+c)
        {
            int d=c+c-b;
            cout<<"AP"<<" "<<d<<endl;
        }
        cin>>a>>b>>c;
    }

}
