#include<iostream>
using namespace std;
int main()
{
    int a[]={1,1,2,3,3,4,5,5};
    int Xor=a[0];
    for(int i=1;i<8;i++)
       Xor=Xor^a[i];
       int setbit=Xor&(-Xor);
       //cout<<setbit<<endl;
       int x=0,y=0;

       for(int i=0;i<8;i++)
       {
           if(a[i]&setbit)
            x=x^a[i];
           else
            y=y^a[i];
       }
       cout<<x<<" "<<y;
}
