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
void addleftdup(node *root)
{
    if(root==NULL)
        return;
    node *temp=new node;
    addleftdup(root->left);
    addleftdup(root->right);

        temp=root->left;
        root->left=push(root->info);
        root->left->left=temp;
}
void preorder(node *root)
{
    if(root==NULL)
    return;
    cout<<root->info<<" ";
    preorder(root->left);
    preorder(root->right);
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
    preorder(root);
    addleftdup(root);
    cout<<endl;
    preorder(root);
}
