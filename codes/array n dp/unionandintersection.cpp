#include<iostream>
using namespace std;
int main()
{
  int a[] = {1, 3, 4, 5, 7};
  int b[] = {2, 3, 5, 6};
  //union
  int i=0,j=0;
  while(i<5 && j<4)
  {
      if(a[i]<b[j])
      {
          cout<<a[i]<<" ";
          i++;
      }
      else if(a[i]>b[j])
      {
          cout<<b[j]<<" ";
          j++;
      }
      else
      {
          cout<<a[i]<<" ";
          i++;
          j++;
      }
  }
  while(i<5)
    {
        cout<<a[i]<<" ";
        i++;
    }
    //intersection
    i=0,j=0;
    cout<<endl;
    while(i<5 && j<4)
    {
     if(a[i]==b[j])
     {
         cout<<a[i]<<" ";
        i++;j++;
    }
    else if(a[i]<b[j])
    {
        i++;
    }
    else
        j++;
    }

  return 0;

}
