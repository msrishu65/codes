#include<iostream>
#include<stdlib.h>
using namespace std;
//incomplete :(
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
int getdistance(node *root,int data,int level)
{
    if(root==NULL)
        return -1;
    if(root->info==data)
        return level;
    int l=getdistance(root->left,data,level+1);
    if(l!=-1)
        return l;
    else
        return getdistance(root->right,data,level+1);
}
void printnodesatdistance(node *root,int dis,int level)
{
    if(root==NULL)
        return;
    if(level==dis)
        cout<<root->info<<" ";
    printnodesatdistance(root->left,dis,level+1);
    printnodesatdistance(root->right,dis,level+1);
}
void nodesatdistance(node *root,node *temp,int k)
{
    if(root==NULL)
        return;
    int d=getdistance(root,temp->info,0);
    printnodesatdistance(root,d-k,0);
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
    int k=2;
    nodesatdistance(root,root->left->left,k);
}
