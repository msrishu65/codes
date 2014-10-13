#include<iostream>
using namespace std;
int main()
{
    int c=0,start,end;
    int m=0;
    int a[]={10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60};
//int a[]={0, 1, 15, 25, 6, 7, 30, 40, 50};
for(int i=0;i<10;i++)
{
    if(a[i]>m)
        m=a[i];
    if(a[i]<m)
        end=i;
    if(a[i]>a[i+1] && c==0)
    {
        c=a[i+1];
    }
}
for(int i=0;i<10;i++)
{
    if(a[i]>c)
        {
            start=i;
            break;
        }

}
cout<<start<<" "<<end;
return 0;
}
