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
void preorder(node *t)
{
if(t==NULL)
return;
cout<<t->info<<" ";
preorder(t->left);
preorder(t->right);
}
node *treetodoublelist(node *t)
{
    if(t==NULL)
        return NULL;
    if(t->left)
    {
     node *leftnode=treetodoublelist(t->left);
     while(leftnode->right)
     {
         leftnode=leftnode->right;
     }
     leftnode->right=t;
     t->left=leftnode;
    }
    if(t->right)
    {
        node *rightnode=treetodoublelist(t->right);
        while(rightnode->left)
            rightnode=rightnode->left;
        rightnode->left=t;
        t->right=rightnode;
    }
    return t;
}
/*void anotherapproach(node *root)
{
    node *pre=NULL;
    if(root!=NULL)
     {
     anotherapproach(root->left);
     root->left=pre;
     pre=root;
     anotherapproach(root->right);
     }

}
node *extended(node *root)
{
     struct node *prev = NULL;

    // Find the right most node in BT or last node in DLL
    while (root && root->right != NULL)
        root = root->right;

    // Start from the rightmost node, traverse back using left pointers.
    // While traversing, change right pointer of nodes.
    while (root && root->left != NULL)
    {
        prev = root;
        root = root->left;
        root->right = prev;
    }

    // The leftmost node is head of linked list, return it
    return (root);
}
node *BTToDLL(node *root)
{
    // Set the previous pointer
    anotherapproach(root);

    // Set the next pointer and return head of DLL
    return extended(root);
}*/
void printList(node *root)
{
    while (root!=NULL)
    {
        cout<<root->info<<" ";
        root= root->right;
    }
}
int main()
{
    // Let us create the tree shown in above diagram
    node *root        = newNode(10);
    root->left        = newNode(12);
    root->right       = newNode(15);
    root->left->left  = newNode(25);
    root->left->right = newNode(30);
    root->right->left = newNode(36);

    // Convert to DLL
    //anotherapproach(root);
    node *head =treetodoublelist(root);
    while(head->left)
        head=head->left;
    // Print the converted list
    //cout<<head->info;
    printList(head);

    return 0;
}


