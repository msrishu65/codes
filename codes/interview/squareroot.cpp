#include<iostream>
using namespace std;
int main()
{
float n;
cin>>n;
float x=n;
float y=1;
float e=0.000001;
while(x-y>e)
{
    x=(x+y)/2;
    y=n/x;;
}
cout<<x;
}
