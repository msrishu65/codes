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
void deletealternates()
{
list *h=head;
while(h!=NULL &&h->next!=NULL)
{
    node=h->next;
    h->next=node->next;
    delete(node);
    h=h->next;
}
}
void splitalternates()
{
    list *h=head;
    while(h!=NULL &&h->next!=NULL)
    {
        if(head2==NULL)
        {
            head2=h->next;
            end2=head2;
            h->next=head2->next;
            h=h->next;
        }
        else
            {
                end2->next=h->next;
                end2=end2->next;
                h->next=end2->next;
                h=h->next;
                end2->next=NULL;
            }
    }
}
void mergelists(list *h1,list *h2)
{
    while(h1!=NULL && h2!=NULL)
    {
        if(h3==NULL)
        {
            if(h1->info>h2->info)
            {
                h3=createnode(h2->info);
                e3=h3;
                h2=h2->next;
            }
            else if(h1->info<h2->info)
            {
                h3=createnode(h1->info);
                e3=h3;
                h1=h1->next;
            }
            else
            {
                h3=createnode(h1->info);
                e3=h3;
                h1=h1->next;
                h2=h2->next;
            }
        }
        else
            {
                if(h1->info>h2->info)
            {
                node=createnode(h2->info);
                e3->next=node;
                e3=node;
                h2=h2->next;
            }
            else if(h1->info<h2->info)
            {
                node=createnode(h1->info);
                e3->next=node;
                e3=node;
                h1=h1->next;
            }
            else
            {
                node=createnode(h1->info);
                e3->next=node;
                e3=node;
                h1=h1->next;
                h2=h2->next;
            }
        }

    }
    if(h1!=NULL)
    {
        while(1)
        {
            node=createnode(h1->info);
            e3->next=node;
            e3=node;
            h1=h1->next;
            if(h1==NULL)
                break;
        }
    }
    if(h2!=NULL)
    {
        while(1)
        {
            node=createnode(h2->info);
            e3->next=node;
            e3=node;
            h2=h2->next;
            if(h2==NULL)
                break;
        }
    }
}
int identical(list *h1,list *h2)
{
    if(h1==NULL && h2==NULL)
        return 0;
        if(h1==NULL && h2!=NULL)
            return 0;
         if(h1!=NULL &&h2==NULL)
            return 0;
        if(h1->info!=h2->info)
            return 0;
    identical(h1->next,h2->next);
    return 1;
}
int main()
{
    createlist(&head,&end);
    display(head);
    //splitalternates();
    createlist(&head2,&end2);
    cout<<endl;
    display(head2);
    cout<<endl;
 //  mergelists(head,head2);
//   display(h3);
if(identical(head,head2))cout<<"yo";
else
    cout<<"no"<<endl;
    return 0;
}
