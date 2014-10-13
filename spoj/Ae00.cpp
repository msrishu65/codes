#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
   int i=1,j=1,c=0;
   for(i=1;i<=n;i++)
   {
       for(j=i;j<=n;j++)
       {
           if(i*j<=n)
            c++;
       }
   }
   cout<<c<<endl;
   }
