#include<iostream>
#include<queue>
#include<stack>
using namespace std;
struct node
{
    int info;
    node *left;
    node *right;
}*root;
node *push(int x)
{
    node *temp=new node;
    temp->info=x;
    temp->left=temp->right=NULL;
        return temp;
}
node *minvalue(node *n)
{
    while(n->left)
    {
        n=n->left;
    }
    return n;
}
node *inordersuccessor(node *root,node *n)
{
  if(n->right)
    return minvalue(n->right);
node *succ=new node;
  while(root)
  {
      if(root->info>n->info)
      {
          succ=root;
          root=root->left;
      }
      else if(root->info<n->info)
        root=root->right;
      else
        break;
  }
  return succ;
}

int main()
{
 /* Let us create following BST
              50
           /     \
          30      70
         /  \    /  \
       20   40  60   80 */
    root=push(50);
    root->left=push(30);
    root->right=push(70);
    root->left->left=push(20);
    root->left->right=push(40);
    root->right->left=push(60);
    root->right->right=push(80);
    node *t=inordersuccessor(root,root->left);
    cout<<t->info;
}
