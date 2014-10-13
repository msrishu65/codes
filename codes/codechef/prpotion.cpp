#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long t,r,b,g,m,rmax,bmax,gmax;
    cin>>t;
    while(t--)
    {
        cin>>r>>g>>b>>m;
        long long red[r],blue[b],green[g];
        for(int i=0; i<r; i++)
            cin>>red[i];
        for(int i=0; i<g; i++)
            cin>>green[i];
        for(int i=0; i<b; i++)
            cin>>blue[i];
        sort(red,red+r);
        sort(blue,blue+b);
        sort(green,green+g);
        while(m--)
        {
            if(red[r-1]>=blue[b-1])
            {
                if(blue[b-1]>=green[g-1])
                    for(int i=0; i<r; i++)
                        red[i]/=2;
                else
                {
                    if(red[r-1]>=green[g-1])
                        for(int i=0; i<r; i++)
                            red[i]/=2;
                    else
                        for(int i=0; i<g; i++)
                            green[i]/=2;
                }
            }
            else
            {
                if(blue[b-1]>=green[g-1])
                    for(int i=0; i<b; i++)
                        blue[i]/=2;
                else
                    for(int i=0; i<g; i++)
                        green[i]/=2;
            }
        }
        cout<<max(red[r-1],max(green[g-1],blue[b-1]))<<endl;
    }
}
