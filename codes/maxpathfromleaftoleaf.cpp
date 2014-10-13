#include<iostream>
using namespace std;
struct node
{
    int d;
    node *left;
    node *right;
};
node *newNode(int data)
{
 node *n=new node;
 n->d=data;
 n->left=NULL;
 n->right=NULL;
 return n;
}
void maxsum(node* root,int& ll,int& rl)
{
    if(!root)
    {
        ll=0;rl=0;return;
    }
    else
    {
        maxsum(root->left,ll,rl);
        int aa=ll,bb=rl;
        maxsum(root->right,ll,rl);
        ll = max(max(ll,aa),rl+bb+root->d);
        rl = max(rl,bb)+root->d;
        return;
    }
}
int main()
{
    node *root = newNode(10);
    root->left = newNode(30);
    root->right = newNode(15);
    root->left->left = newNode(20);
    root->right->right = newNode(5);
    int ll=0,rl=0;
    maxsum(root,ll,rl);
    cout<<ll<<endl;
    //cout<<mx;
}
