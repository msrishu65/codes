#include<iostream>
using namespace std;
int main()
{
int arr[] =  {1, 5, 3, 4, 2};
int k=3,c=0;
int hashmap[1000]={0};
for(int i=0;i<5;i++)
     hashmap[arr[i]]=1;
for(int i=0;i<5;i++)
  {
      int x=arr[i];
      if(x-k>0 && hashmap[x-k])
        c++;
      if(x+k<999 && hashmap[x+k])
        c++;
      hashmap[x]=0;
   }
   cout<<c;
}
