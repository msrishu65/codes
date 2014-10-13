#include<iostream>
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
