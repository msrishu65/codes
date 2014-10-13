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
void postorder(node *t)
{
    stack<node *>s1;
    stack<node *>s2;
    s1.push(t);
    while(!s1.empty())
    {node *temp=s1.top();
    s1.pop();
    if(temp->left)
        s1.push(temp->left);
    if(temp->right)
        s1.push(temp->right);
    s2.push(temp);
    }
    while(!s2.empty())
    {
        node *temp1=s2.top();
        cout<<temp1->info<<" ";
        s2.pop();
    }
}
int main()
{
    node* root = NULL;
    root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
 postorder(root);
 return 0;
}
