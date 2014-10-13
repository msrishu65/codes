#include<iostream>
using namespace std;
int main()
{
int m[4][4] = { {10, 20, 30, 40},
                    {15, 25, 35, 45},
                    {27, 29, 37, 48},
                    {32, 33, 39, 50}
                    };
     int n;
     cin>>n;
     int i=0,j=3;
      while(i<4 && j >=0)
      {if(m[i][j]==n)
      {
      cout<<"foundd at" <<i<<","<<j;
      break;
       }
        else if(m[i][j]<n)
          {
              i++;
          }
          else
            j--;
      }
}
