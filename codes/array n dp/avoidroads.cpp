#include<bits/stdc++.h>
using namespace std;
int main()
{

    int arr[100][100][2];
    long long s[100][100];
    int width,height,n;
    int x1[100],y1[100],x2[100],y2[100];
    cin>>width>>height;
    cin>>n;
    for(int i=0;i<=width;i++)
    {
        for(int j=0;j<=height;j++)
        {
            s[i][j]=0;
            arr[i][j][0]=0;
            arr[i][j][1]=0;
        }
    }
cout<<"bitches"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>x1[i]>>y1[i]>>x2[i]>>y2[i];
        if(x1[i]==x2[i])
        {
            arr[x1[i]][y2[i]][1]=1;

        }
        if(y1[i]==y2[i])
        {
            arr[x2[i]][y1[i]][0]=1;
        }
    }

    for(int i=0;i<=width;i++)
    {
        if(arr[i][0][0]==1)break;
        s[i][0]=1;
    }
    for(int j=0;j<=height;j++)
    {
        if(arr[0][j][1]==1) break;
        s[0][j]=1;
    }
   /* for(int i=0;i<=width;i++)
    {
        for(int j=0;j<=height;j++)
        {
            cout<<arr[i][j][0]<<" "<<arr[i][j][1]<<" "<<s[i][j]<<endl;
        }
    }
    cout<<"nooo"<<endl;*/
    for(int i=1;i<=width;i++)
    {
        for(int j=1;j<=height;j++)
        {
            if(!(arr[i][j][0]))
            {
                s[i][j]=s[i][j]+s[i-1][j];
            }
            if(!arr[i][j][1])
            {
                s[i][j]=s[i][j]+s[i][j-1];
            }
        }
    }
    cout<<endl<<s[width][height];
    return 0;
}
