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
void preordertraversal(node *t)
{
stack<node *>s;
 while(t)
  {
    while(t)
    {
      cout<<t->info<<" ";
      if(t->right)
       {
        s.push(t->right);
       }
        t=t->left;
    }
    if(!s.empty())
    {
      node *temp=s.top();
      s.pop();
      //cout<<temp->info<<" ";
      t=temp;
    }
  }
}
int main()
{
node *root = newNode(10);
  root->left        = newNode(8);
  root->right       = newNode(2);
  root->left->left  = newNode(3);
  root->left->right = newNode(5);
  root->right->left = newNode(2);
  preordertraversal(root);
}
