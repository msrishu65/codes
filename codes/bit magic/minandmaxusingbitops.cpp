#include<iostream>
using namespace std;
int minele(int x,int y)
{
    return(y+(x-y)&((x-y)>>31));
}
int main()
{
int x,y;
cin>>x>>y;
cout<<minele(x,y);
//cout<<endl<<maxele(x,y);
}
