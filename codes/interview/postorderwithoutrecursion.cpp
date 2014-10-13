#include<iostream>
#include<stack>
using namespace std;
struct node
{
    int info;
    node *left,*right;
};
node *push(int d)
{
    node *t=new node;
    t->info=d;
    t->left=t->right=NULL;
    return t;
}
int main()
{
node *root;
root=push(1);
root->left=push(2);
root->right=push(3);
root->left->left=push(4);
root->left->right=push(5);
root->right->left=push(6);
root->right->right=push(7);
stack<node *>s;
stack<node *>r;
node *cur=root;
while(1)
{
    if(cur)
    {
        s.push(cur);
        cur=cur->left;
    }
    else
    {
        if(!s.empty())
        {

            node *t=s.top();
            if(t->right)
                cur=t->right;
            else
            {
            cout<<t->info;
            s.pop();
            }
        }
        else
            break;
    }
}
}
