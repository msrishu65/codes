#include<iostream>
using namespace std;
int main()
{
    int a[]={1, 4, 20, 3, 10, 5};
    int n;
    cin>>n;
    int sum=0;
    int start=0;
    for(int i=0;i<6;i++)
    {

        if(sum==n)
        {
            cout<<start<<" "<<i;
        }
        else if(sum>n)
        {
            while(sum>n)
            { sum=sum-a[start];
            start++;
             }
        }
        else
            sum=sum+a[i];
    }
    return 0;

}
