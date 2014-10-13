#include<iostream>
#include<stack>
using namespace std;
void push(stack <int>*s,stack<int> *minstack,stack<int> *maxstack,int n)
{
    if((*s).empty())
    {
        (*s).push(n);
        (*minstack).push(n);
       (*maxstack).push(n);
    }
  else
    {
        (*s).push(n);
        if(n<(*minstack).top())
            (*minstack).push(n);
        if(n>(*maxstack).top())
            (*maxstack).push(n);
    }
}
int pop(stack<int> *s,stack<int> *minstack,stack<int> *maxstack)
{
    if((*s).empty())
        return -1;
    int p=(*s).top();
    (*s).pop();
    if((*minstack).top()==p)
        (*minstack).pop();
    if((*maxstack).top()==p)
        (*maxstack).pop();
    return p;
}
int minelement(stack<int>minstack)
{
    if(minstack.empty())
        return -1;
    return minstack.top();
}
int maxelement(stack<int> maxstack)
{
    if(maxstack.empty())
        return -1;
    return maxstack.top();
}
int main()
{
    stack<int >s;
    stack<int>minstack;
    stack<int>maxstack;
    int i;
    cin>>i;
    int n;
    while(i--)
    {
        cin>>n;
push(&s,&minstack,&maxstack,n);
    }
int p=pop(&s,&minstack,&maxstack);
int min=minelement(minstack);
int max=maxelement(maxstack);
cout<<p<<" "<<min<<" "<<max<<endl;
while(!s.empty())
{
    cout<<s.top()<<" ";
    s.pop();
}
}
