#include<iostream>
using namespace std;
struct dlist
{
int info;
dlist *prev;
dlist *next;
}*head,*end,*node,*d;
dlist *createnode(int item)
{
	dlist *node=new dlist;
	node->info=item;
	node->next=NULL;
	return node;
}
void push(int data)
{
dlist *node=createnode(data);
if(head==NULL)
{
head=node;
end=node;
head->prev=NULL;
}
else
    {
        end->next=node;
        end->next->prev=end;
      end=node;
      }
      //end->next=NULL;
      }
void createlist()
{
    int n;
cout<<"no of items?"<<endl;
cin>>n;
while(n--)
{
    int d;
cin>>d;
push(d);
}

}
void display(dlist *h)
{
    while(h!=NULL)
    {
        cout<<h->info<<"->"<<" ";
        h=h->next;
    }
}
void displayfromend(dlist *e)
{
    while(e!=NULL)
    {
        cout<<e->info;
        e=e->prev;
    }
}
void reversedlsit(dlist *h)
{
    while(h!=NULL)
    {
        node=h->prev;
        h->prev=h->next;
        h->next=node;
        h=h->prev;
    }
    head=node->prev;
}
void dlete(dlist *d)
{
    d->prev->next=d->next;
    d->next->prev=d->prev;
    d->next=NULL;
    d->prev=NULL;
    delete(d);
}
int main()
{
    createlist();
    display(head);
    cout<<endl;
    //reversedlsit(head);
    //displayfromend(end);
    dlete(head->next);
    display(head);
    return 0;
}
