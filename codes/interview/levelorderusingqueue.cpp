#include<iostream>
#include<queue>
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
void levelorder(node *root)
{
    if(root==NULL)
        return;
    queue<node *>q;
    q.push(root);
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
root=push(1);
root->left=push(2);
root->right=push(3);
root->left->left=push(4);
root->left->right=push(5);
root->right->left=push(6);
root->right->right=push(7);
levelorder(root);
}
