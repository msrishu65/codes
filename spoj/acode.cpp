#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s;
//    unsigned long long x,y,z;
    while(1)
    {
        cin>>s;
        if(s[0]=='0')
            break;
        int n=s.length();
        unsigned long long a[n];
        memset(a,0,sizeof(a));
        a[0]=1;
        for(int i=1; i<n; i++)
        {
            int temp=0;
            temp = (s[i-1]-'0') * 10;
            temp += (s[i] -'0');
            if (s[i]-'0') a[i]= a[i-1];
            if (temp <= 26 && temp > 9) a[i] += a[i-2<0?0:i-2];
            //printf ("%d\t%llu\n",Index, DP[Index]);
            /*if(s[i]=='0')
                a[i]=a[i-2];
                else
                {
                    a[i]=a[i-1];
                    if((s[i-1]=='2' && s[i]<'7')||(s[i-1]<'2' && s[i-1]!='0'))
                        a[i]=a[i]+a[i-2];
                }*/
        }
        cout<<a[n-1]<<endl;
    }
}



