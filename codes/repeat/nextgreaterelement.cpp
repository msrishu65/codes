#include<iostream>
#include<stack>
using namespace std;
int main()
{
int a[]={11, 13, 21, 3};
stack<int> s;
s.push(a[0]);
int i=1;
while(!s.empty())
{
    while(i<4)
    {
        if(a[i]<s.top())
        {
            s.push(a[i]);

        }
        else
            {
                while(a[i]>s.top())
                {
            int c=s.top();
            s.pop();
            cout<<c<<" "<<a[i]<<endl;
            s.push(a[i]);
           }
            }
            i++;
    }
    while(!s.empty())
    {
        int b=s.top();
        s.pop();
        cout<<b<<" "<<"-1"<<endl;
    }

}

}
