#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int a[]={4,5,3,25};
    stack<int >s;
    s.push(0);
    int i=1;
        while(i<4)
        {
            if(!s.empty())
            {
              int y=s.top();
              s.pop();
              while(a[i]>a[y])
              {
               a[y]=a[i];
               if(s.empty())
                break;
               y=s.top();
               s.pop();
              }
              if(a[i]<a[y])
                s.push(y);
         }
         s.push(i);
         i++;
    }
    while(!s.empty())
    {
        int x=s.top();
        a[x]=-1;
        s.pop();
    }
    for(int i=0;i<4;i++)
        cout<<a[i]<<" ";
}
