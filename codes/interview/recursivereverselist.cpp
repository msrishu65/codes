#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
}*head1,*end1,*head2,*end2,*head3,*end3;
node *createnode(int data)
{
    node *temp=new node;
    temp->info=data;
    temp->next=NULL;
    return temp;
}
void push(node **head,node **end,int x)
{
  node *temp=createnode(x);
  if((*head)==NULL)
  {
      *head=temp;
      *end=temp;
  }
  else
  {
      (*end)->next=temp;
      *(end)=(*end)->next;
  }
}
node *reverselist(node *head,node *head2)
{
    if(head==NULL)
        return NULL;
    if((head)->next==NULL)
    return head;
    node *rest;
    rest=reverselist(head->next,head2);
    (head)->next->next=head;
    (head)->next=NULL;
    return rest;
}
int main()
{
push(&head1,&end1,1);
push(&head1,&end1,2);
push(&head1,&end1,3);
push(&head1,&end1,4);
head1=reverselist(head1,head1);
cout<<head1->info;
}
