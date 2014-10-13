#include<iostream>
#include<conio.h>
using namespace std;
struct list
{
int info;
list *next;
}*head,*node,*end;
int n;
int d;
list *createnode(int item)
{
	list *node=new list;
	node->info=item;
	node->next=NULL;
	return node;
}
void push(int data)
{
    list *node=createnode(data);
if(head==NULL)
{
head=node;
end=node;
}
else
    {
        end->next=node;
      end=node;
      }
      end->next=NULL;
      }
void createlist()
{
cout<<"no of items?"<<endl;
cin>>n;
while(n--)
{
cin>>d;
push(d);
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
void nthnode(int m)
{
    list *node=head;
    m--;
    while(m--)
    {
        node=node->next;

    }
    cout<<endl<<node->info;
}
void printmiddlenode()
{
    list *n1=head;
    list *n2=head;
    cout<<endl;
   while(n2!=NULL &&n2->next!=NULL)
   {
       n2=n2->next->next;
       n1=n1->next;
   }
    cout<<n1->info;
}
void delte(list **head)
{
    list *node=*head;
    list *prev;
    while(node!=NULL)
    {

      prev=node->next;
      delete(node);
      node=prev;

    }
    *head=NULL;

}
void reverselist()
{
    list *cur=head;
    list *prev;
    //list *cur;
    prev=NULL;
    while(cur!=NULL)
    {
        //prev=cur;
        node=cur->next;
        cur->next=prev;
        prev=cur;
        cur=node;
    }
    //cout<<prev->info;
    head=prev;
}
void recursivereverse(list *h)
{
    if(h==NULL)
        return;
    else
        recursivereverse(h->next);
    cout<<h->info;
}
void removeduplicates()
{
    list *he=new list;
    he=head;
    while(he->next!=NULL)
    {
        if(he->info=he->next->info)
        {
            node=he->next;
            he->next=he->next->next;
            delete(node);
        }
        else
            {
            he=he->next;
        }
    }
}
int main()
{
createlist();
display(head);
//nthnode(3);
//printmiddlenode();
//delte(&head);
//reverselist();
//recursivereverse(head);
cout<<endl;
removeduplicates();
//cout<<"yo";
//cout<<head->info;
//display(head);

//cout<<head->info;
//cout<<endl<<head->info;
//cout<<endl<<end->info;
return 0;
}
