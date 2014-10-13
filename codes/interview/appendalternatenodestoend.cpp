#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
}*head,*end;
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

void display(node *head)
{
    while(head)
    {
        cout<<head->info<<" ";
        head=head->next;
    }
}
void appendalternatenodesatend(node **head,node **end,node **final)
{
node *h=*head;
node *e=*end;
if(h==NULL || h==*final)
    return;
node *t=h->next;
if(t->next)
    h->next=t->next;
    h=h->next;
    e->next=t;
    e=t;
    t->next==NULL;
    if(t==*final)
    {
//        display(head);
        return;
    }
    appendalternatenodesatend(&h,&e,final);
}
int main()
{
push(&head,&end,1);
push(&head,&end,2);
push(&head,&end,3);
push(&head,&end,4);
push(&head,&end,5);
push(&head,&end,6);
//push(&head,&end,7);
//push(&head,&end,8);
//push(&head,&end,9);
display(head);
appendalternatenodesatend(&head,&end,&end);
display(head);

}
