#include<iostream>
using namespace std;
int main()
{
      int a[6][5]={{0, 1, 1, 0, 1},
                   {1, 1, 0, 1, 0},
                   {0, 1, 1, 1, 0},
                   {1, 1, 1, 1, 0},
                   {1, 1, 1, 1, 1},
                   {0, 0, 0, 0, 0}
                  };
                  int mi=-1,mj=-1,mv=0;
                  int m[6][5];
                  for(int i=0;i<5;i++)
                  {
                    m[0][i]=a[0][i];
                  }
                  for(int i=0;i<6;i++)
                    m[i][0]=a[i][0];
                  for(int i=1;i<6;i++)
                  {
                      for(int j=1;j<5;j++)
                      {
                          if(a[i][j]==0)
                            m[i][j]=0;
                          else
                          m[i][j]=min(m[i][j-1],min(m[i-1][j],m[i-1][j-1]))+1;
                          if(m[i][j]>mv)
                          {
                              mv=m[i][j];
                              mi=i;
                              mj=j;
                          }
                      }
                  }
                   /*                 for(int i=1;i<6;i++)
                  {
                      for(int j=1;j<5;j++)
                      {
                          cout<<m[i][j]<<" ";
                          }
                          cout<<endl;
                      }*/


                  for(int k=mi-mv;k<=mi;k++)
                  {
                      for(int l=mj-mv;l<=mj;l++)
                      {
                          cout<<a[k][l]<<" ";
                      }
                      cout<<endl;
                  }

}
