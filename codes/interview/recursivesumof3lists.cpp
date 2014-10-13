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
int getsize(node *n)
{
    int size = 0;
    while (n != NULL)
    {
        n = n->next;
        size++;
    }
    return size;
}
node *addsamesize(node *head1,node *head2,node *head3,int *carry)
{
    if(head1==NULL)
        return NULL;
        node *res=new node;
    res->next=addsamesize(head1->next,head2->next,head3->next,carry);
    int sum=head1->info+head2->info+head3->info+ *carry;
    *carry=(sum)/10;
    sum=sum%10;
    res->info=sum;
    return res;
}
void addcarrytoremaining(node *head3,node *h,int *carry,node **result)
{
    if(head3==h)
        return ;
    addcarrytoremaining(head3->next,h,carry,result);
    head3->info=head3->info+*carry;
    *carry=(head3->info)/10;
    head3->info=(head3->info)%10;
    head3->next=*result;
    *result=head3;
}
node *add3lists(node *head1,node *head2,node *head3)
{
    int size1=getsize(head1);
    int size2=getsize(head2);
    int size3=getsize(head3);
    int carry=0;
    node *result;
    if(size1==size2)
    {
        if(size2==size3)
     result=addsamesize(head1,head2,head3,&carry);
     else
     {
         int dif=size3-size1;
         node *h=head3;
         while(dif--)
            h=h->next;
         result=addsamesize(head1,head2,h,&carry);
         addcarrytoremaining(head3,h,&carry,&result);
     }
    }
     if(carry)
     {
         node *temp=new node;
         temp->info=carry;
         temp->next=result;
         result=temp;
     }
return result;
}
int main()
{
push(&head1,&end1,1);
push(&head1,&end1,2);
push(&head1,&end1,3);

push(&head2,&end2,2);
push(&head2,&end2,3);
push(&head2,&end2,4);

push(&head3,&end3,5);
push(&head3,&end3,6);
push(&head3,&end3,7);
push(&head3,&end3,8);
push(&head3,&end3,9);

node *head=add3lists(head1,head2,head3);
node *j=head;
while(j)
{
    cout<<j->info<<" ";
    j=j->next;
}
}
