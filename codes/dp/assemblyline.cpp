#include<iostream>
using namespace std;
int main()
{
int a[][4] = {{4, 5, 3, 2},
                {2, 10, 1, 4}};
    int t[][4] = {{0, 7, 4, 5},
                {0, 9, 2, 8}};
    int e[] = {10, 12}, x[] = {18, 7};
int t1[4];
int t2[4];
t1[0]=a[0][0]+e[0];
t2[0]=a[1][0]+e[1];
for(int i=1;i<4;i++)
{
    t1[i]=min(t1[i-1]+a[0][i],t2[i-1]+t[1][i]+a[0][i]);
    t2[i]=min(t2[i-1]+a[1][i],t1[i-1]+t[0][i]+a[1][i]);

}
cout<<min(t1[3]+x[0],t2[3]+x[1]);
}
