#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[]={5, 20, 3, 2, 50, 80};
    sort(a,a+6);
    int n=78;
int i=0,j=5;
while(i<j)
{
    if(a[j]-a[i]<n)
        j++;
    else if(a[j]-a[i]==n)
    {
        cout<<a[i]<<" "<<a[j];
        break;
    }
    else
    {
        i++;
    }

}
}
