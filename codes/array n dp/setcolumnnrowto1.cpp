#include<iostream>
using namespace std;
int main()
{
    int  m[3][4] = { {1, 0, 0, 1},
                     {0, 0, 1, 0},
                     {0, 0, 0, 0},
                   };
                   int r,c;
                   for(int i=0;i<4;i++)
                   {
                       if(m[0][i]==1)
                       {
                           r=1;
                           break;
                       }
                   }
                   for(int i=0;i<3;i++)
                   {
                       if(m[i][0]==1)
                        {
                            c=1;
                            break;
                        }
                   }
      for(int i=1;i<3;i++)
      {
          for(int j=1;j<4;j++)
          {
              if(m[i][j]==1)
              {
                  m[i][0]=1;
                  m[0][0]=1;
              }
          }
      }
      for(int i=1;i<3;i++)
      {
          for(int j=1;j<4;j++)
          {
              if(m[0][i] || m[j][0])
                m[i][j]=1;
          }
      }

      if(r==1)
      {
          for(int i=0;i<4;i++)
            m[0][i]=1;
      }
      if(c==1)
      {
          for(int i=0;i<3;i++)
            m[i][0]=1;
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
