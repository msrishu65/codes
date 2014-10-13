#include<iostream>
using namespace std;
int main()
{
int a[]={ 10, 22, 9, 33, 21, 50, 41, 60 };
int b[8]={1};
for(int i=1;i<8;i++)
{
for(int j=0;j<i;j++)
{
if(a[j]<a[i] && b[i]<b[j]+1 )
{
b[i]=b[j]+1;
}
}

}
return 0;


}
