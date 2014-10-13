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
void preorder(node *root)
{
    if(root==NULL)
        return ;
    cout<<root->info<<" ";
    preorder(root->left);
    preorder(root->right);
}
void addallgreaternodes(node *root,int *sum)
{
    if(root==NULL)
        return;
    addallgreaternodes(root->right,sum);
    root->info=root->info+ *sum;
    *sum=root->info;
    addallgreaternodes(root->left,sum);
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
    int sum=0;
    preorder(root);
//    addallgreaternodes(root,&sum);
addgreaternodesvalue(root);
    cout<<endl;
    preorder(root);
}
