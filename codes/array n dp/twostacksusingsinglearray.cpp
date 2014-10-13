#include<iostream>
using namespace std;
void push1(int a[],int top1,int ele)
{
    if(top1+1!=top2)
    {
        top1++;
        a[top]=ele;
    }
    else
    {
        cout<<"overflow";
        return;
    }
}
void push2(int a[],int top2,int ele)
{
    if(top1+1!=top2)
    {
        top2--;
        a[top2]=ele;
    }
    else
    {
        cout<<"overflow";
        return;
    }
}
void pop1(int a[])
{
    if(top1>=0)
    {
        cout<<a[top1];
        top1--;
    }
    else
        cout<<"underflow";
    return;
}
void pop2(int a[])
{
    if(top2<=49)
    {
        cout<<a[top2];
        top2++;
    }
    else
        cout<<"underflow";
    return;
}
int main()
{
    int a[50];
    int top1=0,top2=49;

}
