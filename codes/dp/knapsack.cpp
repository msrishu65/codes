#include<iostream>
using namespace std;
int main()
{
    int w;
    cin>>w;
    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int a[w+1];
    for(int i=0;i<=w;i++)
        a[i]=0;
    a[wt[0]]=val[0];
    //cout<<"yo";
    for(int i=11;i<=w;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(wt[j]<=i && a[i]<a[i-wt[j]]+val[j])
                a[i]=a[i-wt[j]]+val[j];

        }
                  cout<<a[i]<<endl;
    }
    cout<<a[w];

}
