#include<iostream>
#define NA -1
using namespace std;

int main()
{
int a[]={2, 8, NA, NA, NA, 13, NA, 15, 20};
int b[]={5, 7, 9, 25};
int j=8;
for(int i=8;i>=0;i--)
{
    if(a[i]!=NA)
    {
        a[j]=a[i];
        j--;
    }
}

//for(int i=0;i<9;i++)
  //  cout<<a[i]<<" ";
int i=4;
j=0;
int k=0;

while(k<9)
{
    if(a[i]<b[j] && i<9)
        {
            a[k]=a[i];
            i++;
            k++;
        }
        else
               {
                a[k]=b[j];
                j++;
                k++;
               }
}
 /*while (k<9)
  {
    if ((i <9&& a[i] <= b[j]) || (j == 4))
    {
      a[k] = a[i];
      k++;
      i++;
    }
    else  // Otherwise take emenet from N[]
    {
      mPlusN[k] = N[j];
      k++;
      j++;
    }
  }*/
for(int i=0;i<9;i++)
    cout<<a[i]<<" ";
}
