#include<iostream>
using namespace std;
int main()
{
string huns[]={" ","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
string tens[]={" ","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
string ones[]={" ","I","II","III","IV","V","VI","VII","VIII","IX"};
string s="";
int n;
cin>>n;
while(n>=1000)
{
    s=s+"M";
        n=n-1000;
}
while(n>=100)
{
    s=s+huns[n/100];
    n=n%100;
}
while(n>=10)
{
    s=s+tens[n/10];
    n=n%10;
}
if(n>=0)
    s=s+ones[n];
    cout<<s;
}
