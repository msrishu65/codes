#include<iostream>
using namespace std;
struct list
{
int info;
list *next;
list *random;
}*node,*head,*end,*head2,*end2,*h3,*e3;
list *createnode(int item)
{
	list *node=new list;
	node->info=item;
	node->next=NULL;
	return node;
}
void push(list **head,list **end,int data)
{
    list *node=createnode(data);
if(*head==NULL)
{
 *head=node;
 *end=node;
}
else
{
	(*end)->next=node;
	*end=node;

}
}
void createlist(list **head,list **end)
{
    int n;
cout<<"no of items?"<<endl;
cin>>n;
while(n--)
{
    int d;
cin>>d;
push(head,end,d);
}

}
void display(list *h)
{
    while(h!=NULL)
    {
        cout<<h->info<<"->"<<" ";
        h=h->next;
    }
}
void mergealternatenodes(list *h1,list *h2)
{
    while(h1!=NULL)
    {
        node=h1->next;
        h1->next=h2;
        h3=h2->next;
        h2->next=node;
        h2=h3;
        h1=node;
        }
        head2=h2;
}
int main()
{
    createlist(&head,&end);
    createlist(&head2,&end2);
    mergealternatenodes(head,head2);
    display(head);
    cout<<endl;

    display(head2);
  return 0;
}
