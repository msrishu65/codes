#include<iostream>
using namespace std;
int main()
{
 int a[4][4] = { {10, 20, 30, 40},
                    {15, 25, 35, 45},
                    {27, 29, 37, 48},
                    {32, 33, 39, 50},
                  };
int n;
cin>>n;
int j=3;
while(j>0)
{
if(a[0][j]<n)
{
break;
}
j--;
}
for(int i=0;i<4;i++)
{
if(a[i][j]==n)
cout<<i<<" "<<j;

}
}
