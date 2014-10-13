#include<iostream>
#include<cstring>
using namespace std;
int main()
    {
    string s;
    cin>>s;
    int sum=0;
    int n=s.length();
    for(int i=0;i<n-1;i++)
        {
        for(int j=1;j<=n;j++)
            {
            string str=s.substr(i,j);
            std::string::size_type sz;
            int c= std::stoi (str,&sz);
            sum=(sum+c)%1000000007;
        }
    }
    int c=s[n-1]-'0';
    sum=sum+c;
    cout<<sum<<endl;

}
