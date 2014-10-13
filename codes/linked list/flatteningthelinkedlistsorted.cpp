#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
    node *down;
};
void push (node** head, int data)
{
    node* t = new node;
    t->next = NULL;
    t->info  = data;
    t->down = (*head);
    *head= t;
}
node *merge(node *a,node *b)
{
    if(a==NULL)
        return b;
    if(b==NULL)
        return a;
    node* res;
    if(a->info<b->info)
    {
        res=a;
        res->down=merge(a->down,b);
    }
    else
    {
        res=b;
        res->down=merge(a,b->down);
    }
    return res;
}
void flattlist(node *head)
{
 /*   if((head)==NULL || (head)->next==NULL)
        return head;

        return merge(head,flattlist(head->next));*/
      node *h=head;
      if(h==NULL ||h->next==NULL)
            return;
      else
      {
          node *c=h->next->next;
          head=merge(h,h->next);
          if(c)
          (head)->next=c;
          else
            (head)->next=NULL;
          flattlist(head);
      }
}
void display(node *head)
{
    node *h=head;
    while(h)
    {
        cout<<h->info<<"->";
        h=h->down;
    }
}
int main()
{
    node *root=NULL;

   /* Let us create the following linked list
       5 -> 10 -> 19 -> 28
       |    |     |     |
       V    V     V     V
       7    20    22    35
       |          |     |
       V          V     V
       8          50    40
       |                |
       V                V
       30               45
    */
    push( &root, 30 );
    push( &root, 8 );
    push( &root, 7 );
    push( &root, 5 );
    push( &( root->next ), 20 );
    push( &( root->next ), 10 );

    push( &( root->next->next ), 50 );
    push( &( root->next->next ), 22 );
    push( &( root->next->next ), 19 );

    push( &( root->next->next->next ), 45 );
    push( &( root->next->next->next ), 40 );
    push( &( root->next->next->next ), 35 );
    push( &( root->next->next->next ), 20 );
  flattlist(root);
  display(root);
}
