#include<iostream>
using namespace std;
int main()
{
    int t;
    char a[12]= {'C','c','D','d','E','F','f','G','f','A','B','S'};
    cin>>t;
    char x,y,z;
    while(t--)
    {
        cin>>x>>y>>z;
        int i,j;
        for(i=0; i<12; i++)
            if(a[i]==x)
                break;
        for(j=0; j<12; j++)
            if(a[j]==y)
                break;
        if(j-i==4 || 12-i+j==4)
            cout<<"major"<<endl;
        else
            cout<<"minor"<<endl;

    }
}
