#include<bits/stdc++.h>
using namespace std;
#define F(i,n) for(int i=0;i<n;++i)
#define F1(i,n) for(int i=1;i<=n;++i)
int n;
int id[11][100+10];
int a[11];
char str[600];
void processInput(int pid){
    int i=-1,sz=strlen(str),nmbr=0,cnt=0;
    while((++i) < sz){
        if(str[i]==' '){id[pid][cnt++]=nmbr;nmbr=0;}
        else nmbr = (nmbr*10)+(str[i]-'0');
    }
    id[pid][cnt++]=nmbr;
    a[pid]=cnt;
}
const int mod=1000000000+7;
int ways[100+10];
int main(){
    int t;cin>>t;
    while(t--){
        cin>>n;
        fflush(stdin);
        F1(i,n){
            cin.getline(str,500,'\n');
            processInput(i);
        }
        map<int,int> mp[100+10];
        F(i,100)ways[i]=0;
        F(i,a[1])ways[ id[1][i] ]=1,mp[i][ id[1][i] ]=1;
        for(int i=2;i < n; ++i){
            int temp[100+10];

        }
    }
}
