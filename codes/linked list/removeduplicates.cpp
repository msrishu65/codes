#include<iostream>
using namespace std;
struct list
{
int info;
list *next;
list *random;
}*node,*head,*end,*head2,*end2;
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
removeduplicates();
cout<<endl;
display(head);
return 0;

}
