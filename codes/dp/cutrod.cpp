#include<iostream>
using namespace std;
int main()
{
    int p[]={3, 5, 8, 9, 10, 17, 17, 20};
    int n=8;
    int v[8];
for(int i=0;i<8;i++)
    v[i]=p[i];
    for(int i=1;i<8;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(p[j]+v[i-j-1]>v[i])
                v[i]=p[j]+v[i-j-1];

        }
    }
    cout<<v[7];
}
