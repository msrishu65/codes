#include<iostream>
#include<queue>
using namespace std;
struct node
{
int info;
node *left;
node *right;
};
node *newNode(int data)
{
node *n=new node;
n->info=data;
n->left=NULL;
n->right=NULL;
return n;
}
void levelorder(node *t)
{
 queue<node *> q;
 if(t)
 {
     q.push(t);
 }
 while(!q.empty())
 {
     node *temp=q.front();
     q.pop();
     cout<<temp->info<<" ";
     if(temp->left)
        q.push(temp->left);
     if(temp->right)
        q.push(temp->right);
}
}
int main()
{
node *root = newNode(1);
  root->left        = newNode(2);
  root->right       = newNode(3);
  root->left->left  = newNode(4);
  root->left->right = newNode(5);
  levelorder(root);
  return 0;
}
