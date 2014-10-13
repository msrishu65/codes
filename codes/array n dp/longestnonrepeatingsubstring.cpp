#include<iostream>
#include<cstring>
#include<climits>
using namespace std;
int arr[26];
int main()
{
    int start=0;
    string str;
    cin>>str;
    for(int i=0;i<26;i++)arr[i]=-1;
    int n=str.length();
    int ans=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[str[i]-65]==-1)
        {
            ans=max(ans,i-start+1);
            //ans=ans+1;
            arr[str[i]-65]=i;
        }
        else
        {
            start=arr[str[i]-65]+1;
            //start=i+1;
            for(int i=0;i<26;i++)if(arr[i]<start)arr[i]=-1;
            arr[str[i]-65]=i;

            ans=max(ans,i-start+1);
        }


    }
    cout<<ans<<endl;
}
