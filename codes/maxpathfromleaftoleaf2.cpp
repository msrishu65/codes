#include<iostream>
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
int maxsum(node *root,int *mx)
{
    if(root==NULL)
        return 0;
    int l=0,r=0;
    int ls=maxsum(root->left,&l);
    int rs=maxsum(root->right,&r);
    *mx=max(ls,rs)+root->info;

}
int main()
{
    node *root = newNode(10);
    root->left = newNode(30);
    root->right = newNode(15);
    root->left->left = newNode(20);
    root->right->right = newNode(5);
    int mx=0;
    cout<<maxsum(root,&mx);
}


