#include<iostream>
#include<cstring>
using namespace std;
int mincost(string s,string r)
{
    if(s.compare(r)==0)
        return 1;
    return 0;
}
int main()
{
string s="incline";
string r="incline";
cout<<mincost(s,r);
}
