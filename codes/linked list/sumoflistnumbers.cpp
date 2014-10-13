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
int count(list *p)
{
    int cr=0;
    while(p!=NULL)
    {
        cr++;
        p=p->next;
    }
return cr;
}
void sumoflists(list *h1,list *h2)
{
    list *res=NULL;
    list *rend;
    int sum=0;
    int c=0;
    int c1=count(h1);
    int c2=count(h2);
    if(c1==c2)
    {
        while(h1!=NULL)
        {
            sum=h1->info+h2->info+c;
            if(sum>10)
            {
                sum=sum%10;
                c=1;
            }
            else
            {
                c=0;
            }
            push(&res,&rend,sum);
            h1=h1->next;
            h2=h2->next;
        }
    }
        else
        {
           if(c1<c2)
            {
                int t=c1;
                c1=c2;
                c2=t;
                list *temp=h1;
                h1=h2;
                h2=temp;
            }
       while(c2--)
           {
                sum=h1->info+h2->info+c;
                if(sum>=10)
                {
                sum=sum%10;
                c=1;
                }
                else
                {
                c=0;
                }
               // cout<<endl<<sum;
                push(&res,&rend,sum);
                h1=h1->next;
                h2=h2->next;
            }
        while(h1!=NULL)
            {
                h1->info=h1->info+c;
                if(h1->info>=10)
                {
                    (h1->info)=(h1->info)%10;
                    c=1;
                }
                else{c=0;}
                    push(&res,&rend,h1->info);
                    h1=h1->next;
            }

        }
        display(res);
}
list *sumoflists2(list *h1,list *h2,int carry)
{
    if(h1==NULL)
    {
        return NULL;
    }
    int sum;
    list *res=new list;
    res->next=sumoflists2(h1->next,h2->next,carry);
    sum=h1->info+h2->info+carry;
    sum=sum%10;
    carry=sum/10;

    return res;
}
int main()
{
    createlist(&head,&end);
    createlist(&head2,&end2);
    cout<<"yes"<<endl;
    sumoflists(head,head2);
    display(h3);
    //list *head3=sumoflists2(head,head2,0);
    //display(head3);
    return 0;
}
