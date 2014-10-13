#include<iostream>
using namespace std;
int maxproduct(int n)
{
    if(n<=1)
        return 0;
    int m=-1;
    for(int i=1;i<n;i++)
    {
      m=max(m,max(maxproduct(i)*(n-i),i*(n-i)));
   //   cout<<m<<endl;
    }
    return m;
}
int main()
{
    int n;
    cin>>n;
  //  cout<<maxproduct(n);
  int a[n+1];
  a[0]=0;
  a[1]=0;
  for(int i=2;i<=n;i++)
  {
      int m=-1;
      for(int j=1;j<i;j++)
      {
          m=max(m,max(a[j]*(i-j),j*(i-j)));
      }
      a[i]=m;
  }
cout<<a[n];
}
