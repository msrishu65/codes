#include<iostream>
using namespace std;
int main()
{
    int a[]={3,1,4,6,2,7,5};
    int sum=11;
    int x=0;
    int start=0;
    for(int i=0;i<7;i++)
    {
        x=x+a[i];
        if(sum==x)
        {
            cout<<start<<" "<<i;
            break;
        }
        else if(x>sum)
        {
            while(x>sum)
            {
                x=x-a[start];
                start++;
            }
            if(x==sum)
            {
                cout<<start<<" "<<i;
                break;
            }
        }
    }
}

