#include<iostream>
using namespace std;
int main()
{
int m[3][4] = { {1, 0, 0, 1},
        {0, 0, 1, 0},
        {0, 0, 0, 0},
    };
    int r[3]={0,0,0};
    int c[4]={0,0,0,0};
    for(int i=0;i<3;i++)
    {

        for(int j=0;j<4;j++)
        {
            if(m[i][j]==1)
            {
                r[i]=1;
                c[j]=1;
            }
        }
    }
    for(int i=0;i<3;i++)
        {
            if(r[i])
            {
                for(int j=0;j<3;j++)
                    m[i][j]=1;
            }
        }
     for(int j=0;j<4;j++)
     {
         if(c[j])
         {
             for(int i=0;i<3;i++)
                m[i][j]=1;
         }
     }
     for(int i=0;i<3;i++)
 {
     for(int j=0;j<4;j++)
     {
         cout<<m[i][j]<<" ";
     }
     cout<<endl;
}
}
