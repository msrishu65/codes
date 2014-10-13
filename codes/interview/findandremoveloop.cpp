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
void findandremoveloop(node *head)
{
    node *s=head;
    node *f=head->next;
    while(s!=f)
    {
        s=s->next;
        f=f->next->next;
    }
    node *h=s->next;
    int c=1;
    while(h!=s)
    {
        c++;
        h=h->next;
    }
    h=head;
    node *h1=head;
    while(c--)
    {
        h1=h1->next;
    }
    while(h!=h1)
    {
        h=h->next;
        h1=h1->next;
    }
    while(h1->next!=h)
    {
        h1=h1->next;
    }
    h1->next=NULL;
}
int main()
{
push(&head1,&end1,1);
push(&head1,&end1,2);
push(&head1,&end1,3);
push(&head1,&end1,4);
push(&head1,&end1,5);
end1->next=head1->next->next;
findandremoveloop(head1);
node *h=head1;
while(h)
{
    cout<<h->info<<" ";
    h=h->next;
}
}
