#include<iostream>
using namespace std;
int arr[10];
int n;
void rec(int pos, int prev){
    if(pos==n){
        for(int i=0;i<n;++i)cout<<arr[i];//<<",";
        cout<<endl;
        return;
    }
    for(int i=prev+1;i<=9;++i){
        arr[pos]=i;
        rec(pos+1,i);
    }
}
int main()
{
    cin>>n;
    rec(0,0);

}
