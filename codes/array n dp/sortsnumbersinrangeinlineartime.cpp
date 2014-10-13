#include<iostream>
using namespace std;
int main()
{
    int a[]={0, 23, 14, 12, 9};
  int hashmap[25]={0};
  for(int i=0;i<5;i++)
  hashmap[a[i]]=1;
  for(int i=0;i<25;i++)
   {
   if(hashmap[i]==1)cout<<i<<" ";
   }
}
