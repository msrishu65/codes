#include<iostream>
using namespace std;
  int b[99],c;
int merge(int [],int ,int ,int);
int mergesort(int a[],int low,int high)
{
    int c=0;
if(low<high)
{
    int mid=(low+high)/2;
    c=mergesort(a,low,mid);
    c=c+mergesort(a,mid+1,high);
    c=c+merge(a,low,mid,high);
}
return c;
}
int merge(int a[],int low,int mid,int high)
{
    int c=0;
    int i=low;
    int j=mid+1;
    int k=low;
    while(i<=mid&& j<=high)
    {
        if(a[i]<=a[j])
        {
            b[k]=a[i];
            i++;
            k++;
        }
        else
        {
            b[k]=a[j];
            j++;
            k++;
            c=c+mid-i+1;
        }
    }
    while(i<=mid)
    {
            b[k]=a[i];
            i++;
            k++;
    }
    while(j<=high)
    {
        b[k]=a[j];
        j++;
        k++;
    }

 for(int k=low;k<=high;k++)
			{
				a[k]=b[k];
            }
return c;
}
int main()
{

    int a[]={1, 20, 6, 4, 5};
    cout<<mergesort(a,0,4)<<endl;
    //cout<<"yo";
    for(int i=0;i<5;i++)
    cout<<a[i]<<" ";
    //cout<<endl<<c;
}
