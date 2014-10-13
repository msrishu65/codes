#include<iostream>
using namespace std;
struct tree
{
    int info;
    tree *left;
    tree *right;
};
tree *push(int data)
{
    tree *temp=new tree;
    temp->info=data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
void printcoordinates(tree *root,int x,int y)
{
    if(root==NULL)
        return;
    cout<<root->info<<"coordinates are"<<x<<" "<<y<<endl;
    printcoordinates(root->left,x-1,y-1);
    printcoordinates(root->right,x+1,y-1);
}
int main()
{
    tree *root=new tree;
    root=push(1);
    root->left=push(2);
    root->right=push(3);
    root->left->left=push(4);
    root->left->right=push(5);
    root->right->left=push(6);
    root->right->right=push(7);
    int x=0,y=0;
   printcoordinates(root,x,y);
}
