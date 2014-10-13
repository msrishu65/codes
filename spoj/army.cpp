#include<iostream>
#include<vector>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int t,m,n;
    scanf("%d",&t);
    vector<int>a;
    vector<int>b;
    while(t--)
    {
        printf("\n");
        scanf("%d%d",&m,&n);
        a.clear();
        a.resize(m);
        b.clear();
        b.resize(n);
        for(int i=0;i<m;i++)
            scanf("%d",&a[i]);
        for(int i=0;i<n;i++)
            scanf("%d",&b[i]);
            sort(a.begin(),a.end());
            sort(b.begin(),b.end());
            int i=0,j=0;
            while(1)
            {
                if(i>=m)
                {
                    printf("MechaGodzilla\n");
                    break;
                }
                if(j>=n)
                {
                    printf("Godzilla\n");
                    break;
                }
                if(a[i]==b[j])
                    j++;
                else if(a[i]<b[j])
                    i++;
                else
                    j++;
            }
    }
}
