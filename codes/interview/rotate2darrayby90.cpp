#include<iostream>
using namespace std;
int main()
{
    int a[3][3]={{1,2,3},
                 {4,5,6},
                 {7,8,9}
                };
       int b[3];
       for(int i=0;i<3;i++)
       {
           b[i]=a[i][0];
       }
    for(int i=0;i<3;i++)
    {
        a[i][0]=a[2][i];
    }
    for(int i=0;i<3;i++)
    {
        a[2][i]=a[2-i][2];
    }
    for(int i=2;i>=0;i--)
    {
        a[i][2]=a[0][i];
    }
    for(int i=0;i<3;i++)
        a[0][i]=b[2-i];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
