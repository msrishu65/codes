#include<iostream>
using namespace std;
void reversearray(int a[],int i,int j)
{
    if(i<j)
    {
        int t=a[i];
        a[i]=a[j];
        a[j]=t;
        reversearray(a,i+1,j-1);
    }
}
int main()
{
int a[6]={1,2,3,4,5,6};
int i=0,j=5;
/*while(i<j)
{
int t=a[i];
a[i]=a[j];
a[j]=t;
i++;
j--;
}*/
reversearray(a,0,5);
for(int i=0;i<6;i++)cout<<a[i]<<" ";
return 0;
}
