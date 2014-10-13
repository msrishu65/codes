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
void copylist()
{
    //list *head2=new list;
    list *k=head;
    list *p;
    cout<<endl;
    while(k!=NULL)
    {
        list *node=createnode(k->info);
        if(head2==NULL)
        {
            head2=node;
            end2=node;
        }
        else
        {
            end2->next=node;
            end2=node;
        }
        end2->random=k;
        p=k->next;
        k->next=end2;
        k=p;
    }
    list *h2=head2;
    //cout<<"yo"<<endl;
    while(h2->next!=NULL)
    {
        //cout<<endl<<h2->info;
        h2->random=h2->random->random->next;
        h2=h2->next;
        //cout<<endl<<h2->info;
    }
}
int main()
{
    createlist();
    list *m=head;
    m->random=m->next->next;
    m->next->random=m->next->next->next;
    m->next->next->random=m->next->next->next;
    m->next->next->next->random=m->next->next->next;
    display(head);
    copylist();
    cout<<"yo";
    display(head2);
    cout<<endl<<head2->next->random->info<<" "<<head2->next->next->random->info;
    }
