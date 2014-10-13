#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    set<int,greater<int> > my;
    int temp;
    for(int i=0;i<n;i++){cin>>temp;my.insert(temp);}
    set<int> :: iterator it;
    it=my.end();
    it--;
    cout<<*it<<endl;
}
