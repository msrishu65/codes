#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    //10 1010
    string s=" ";
    while(n)
    {
        if(n%2==0)
            s=s+"0";
        else
            s=s+"1";
        n=n/2;
    }
    cout<<s;
}

