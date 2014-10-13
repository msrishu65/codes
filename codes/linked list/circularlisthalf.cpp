#include<iostream>
using namespace std;
struct list{
int info;
list *next;
}*head,*node,*end;
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
void display(list *h)
{
    while(h!=NULL)
    {
        cout<<h->info<<"->"<<" ";
        h=h->next;
    }
}
void displaycircularlist(list *j)
{
    list *k=j;
    do
    {
        cout<<j->info<<"->";
        j=j->next;
    }while(j!=k);
}

int main()
{
    createlist();
    display(head);
    end->next=head;
    list *h=head;
    list *s=head;
     //   list*f=head;
    while(head!=h->next && h->next->next!=head)
    {
        s=s->next;
        h=h->next->next;
        //cout<<s->info<<" "<<h->info;
    }
    if(h->next->next==head)
    {
        h=h->next;
    }
    list *h1=new list;
    h1=s->next;
    s->next=head;
    h->next=h1;
    displaycircularlist(head);
    displaycircularlist(h1);
    //cout<<head->info<<" "<<h1->info;

}
