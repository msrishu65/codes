#include<iostream>
using namespace std;
struct rectangle
{
    int x1,y1;
    int x2,y2;
};
int main()
{
    rectangle r1,r2;
    if(r2.x1>r1.x2 || r1.x1> r2.x2)
        cout<<"no";
    else if(r2.y1<r1.y2 || r1.y1<r2.y2)
        cout<<"no";
    else
        cout<<yes;
}
