#include<iostream>
#include<stack>
using namespace std;
struct node
{
    int info;
    node* left;
    node* right;
};
node *newNode(int data)
{
    node *n =new node;
    n->info  = data;
    n->left  = NULL;
    n->right = NULL;

    return(n);
}
void inordertraversal(node *t)
{
stack<node *>s;
node *cur=t;
int done=0;
while(!done)
{
    if(cur)
    {
        s.push(cur);
        cur=cur->left;
    }
    else
    {
        if(s.empty())
    {
        done=1;
    }
    else
    {
        cur=s.top();
        s.pop();
        cout<<cur->info<<" ";
        cur=cur->right;
    }
    }
}
}
int main()
{

   node *root = newNode(1);
  root->left        = newNode(2);
  root->right       = newNode(3);
  root->left->left  = newNode(4);
  root->left->right = newNode(5);
  inordertraversal(root);
  return 0;

}
