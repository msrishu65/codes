#include<iostream>
#include<climits>
#include<stdio.h>
using namespace std;
int main()
    {
    long long t,x1,y1,x2,y2,xm,ym,m1,m2,m3;
    //freopen("in", "r", stdin);
    //freopen("out", "w", stdout);
    cin>>t;
    while(t--)
        {
            cin>>x1>>y1>>x2>>y2>>xm>>ym;
        if(x1!=0)
            m1=y1/x1;
        else
            m1=INT_MAX;
        if(x2!=0)
            m2=y2/x2;
        else
            m2=INT_MAX;
        int z1,z2;
        if(m1==INT_MAX)
            z1=-1;
        else
            z1=(ym-(m1*xm));
        if(m2==INT_MAX)
            z2=-1;
        else
            z2=(ym-(m2*xm));
            cout<<endl<<m1<<" "<<m2<<" "<<z1<<" "<<z2<<endl;
        if(z1*z2<=0)
            {
                if(m1==0 && m2==0)
                {
                  if(ym==0 && ((x1>0 && xm>x1)||(x1<0 && xm<x1)))
                     cout<<"NO4"<<endl;
                  else
                     cout<<"YES5"<<endl;
                }
                else   if(x1==x2)
                {
                  if((x1>0 && xm<x1) || (x1<0 && xm>x1))
                    cout<<"YES1"<<endl;
                  else
                    cout<<"NO1"<<endl;
                }
            else
                {
                  m3=(y2-y1)/(x2-x1);
                  int c=y1-m3*x1;
                  int c1=(ym-(m3*xm)-c);
                  int c2=-c;
                  if(c1*c2>0)
                    cout<<"YES2"<<endl;
                  else if(c1*c2==0&& xm<x1 && ym<y1)
                    cout<<"YES3"<<endl;
                  else
                    cout<<"NO2"<<endl;
             }
         }
        else if(z1==-1 && z2==-1)
            {
            if((xm==0)&&((y1>0 && ym>y1) || (y1<0 && ym<y1)))
                cout<<"NO3"<<endl;
            else
                cout<<"YES4"<<endl;
            }
        else
            cout<<"YES6"<<endl;
    }
}
