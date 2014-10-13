#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[100];
    int n;cin>>n;
    for(int i=0;i<n;++i)cin>>arr[i];
    int a=0,b=n-1;
    for(int i=0;i<n;++i){
        //while(arr[i]!=1){
            if(arr[i]==0 && i>a)
                swap(arr[a++],arr[i]);
            else if(arr[i]==2 && i<b)
            {
                swap(arr[b--],arr[i]);
                if(arr[i]==1)
                    i--;
            }
        //}
        for(int i=0;i<n;++i)cout<<arr[i];cout<<endl;
        for(int i=0;i<n;++i)if(i==a&&i==b)cout<<"*";else if(i==a)cout<<"a";else if(i==b)cout<<"b";else cout<<" ";cout<<endl;
    }
    for(int i=0;i<n;++i)cout<<arr[i];
}
