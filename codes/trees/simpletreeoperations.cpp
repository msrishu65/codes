#include<iostream>
using namespace std;
struct node
{
    int info;
    node* left;
    node* right;
}*root1,*root,*root5;

int pt=0;
struct stack
{
    stack *nd;
    stack *next;
};
int a[1000],i=0,j;
node *newNode(int data)
{
    node *n =new node;
    n->info  = data;
    n->left  = NULL;
    n->right = NULL;

    return(n);
}
void preorder(node *t)
{
if(t==NULL)
return;
cout<<t->info<<" ";
preorder(t->left);
preorder(t->right);
}
void postorder(node *t)
{
    if(t==NULL)
        return ;
        postorder(t->left);
        postorder(t->right);
        cout<<t->info<<" ";
}
int sizeoftree(node *t)
{
    if(t==NULL)
        return 0;
    return (sizeoftree(t->left)+1+sizeoftree(t->right));
}
int isidentical(node *t1,node *t2)
{
    if(t1==NULL &&t2==NULL)
        return 1;
    if(t1==NULL && t2!=NULL)
        return 0;
    if(t1!=NULL && t2==NULL)
        return 0;
    if(t1->info!=t2->info)
        return 0;
    return(isidentical(t1->left,t2->left)&&
    isidentical(t1->right,t2->right));
}
int heightoftree(node *t)
{
  if(t==NULL)
        return 0;
  else
    return (max(heightoftree(t->left),heightoftree(t->right))+1);
}
void deletetree(node *t)
{
    if(t==NULL)
        return;
    deletetree(t->left);
    deletetree(t->right);
    delete(t);
}
void mirrortree(node *t)
{
if(t==NULL)
        return;
mirrortree(t->left);
mirrortree(t->right);
node *temp=new node;
temp=t->left;
t->left=t->right;
t->right=temp;
}
int m=0,d;
void roottoleaf(node *t,int l)
{
    int sum=0;
if(t==NULL)
{
    return;
}
    a[l]=t->info;
    l++;

if(t->left==NULL && t->right==NULL)
{
    for(int i=0;i<l;i++)
    {
        cout<<a[i]<< " ";
        sum=sum+a[i];
    }
    if(sum>m)
    {
        m=sum;
        d=a[l-1];
    }
    cout<<endl;
}
else
{
roottoleaf(t->left,l);
roottoleaf(t->right,l);
}
}
void lowestcommonancestor(node *t,int n1,int n2)
{
    if(t==NULL)
        return;
if(n1==t->info || n2==t->info)
{
    cout<<t->info;
}
if(n1<t->info && n2>t->info)
{
    cout<<t->info;
}
else if(n1<t->info && n2<t->info)
{
    t=t->left;
    lowestcommonancestor(t,n1,n2);
}
else if(n1>t->info &&n2>t->info)
{
    t=t->right;
    lowestcommonancestor(t,n1,n2);
}
}
int c=0;
void levelorder(node *t,int level)
{
    if(t==NULL)
        return;
    if(level==1)
    {
        cout<<t->info<<" ";
    }
     else
     {
         levelorder(t->left,level-1);
        levelorder(t->right,level-1);
     }
}
void countleafnodes(node *t)
{
    if(t==NULL)
        return;
    if(t->left==NULL &&t->right==NULL)
    c++;
    countleafnodes(t->left);
    countleafnodes(t->right);

}
int isbst(node *t,int min,int max)
{
    if(t==NULL)
        return 1;
    if(t->info<min||t->info>max)
        return 0;
    return
    isbst(t->left,min,t->info-1)&&
    isbst(t->right,t->info+1,max);
}
void spirallevelorder(node *t,int level,int sign)
{
    if(t==NULL)
        return;
    if(level==1)
        cout<<t->info<<" ";
    if(sign==1)
    {
       spirallevelorder(t->left,level-1,sign);
       spirallevelorder(t->right,level-1,sign);
    }
    else
    {
        spirallevelorder(t->right,level-1,sign);
        spirallevelorder(t->left,level-1,sign);
    }
}
int checksumproperty(node *t)
{
    int l=0;
    int r=0;
    if(t==NULL || (t->left==NULL&&t->right==NULL))
        return 1;
    if(t->left!=NULL)
        l=t->left->info;
    if(t->right!=NULL)
        r=t->right->info;
    if(t->info==l+r && checksumproperty(t->left)
       && checksumproperty(t->right))
    {
     return 1;       }
            return 0;
}
void converttochildrensumtree(node *t)
{
    int l=0;
    int r=0;
 if(t==NULL||(t->left==NULL &&t->right==NULL))
        return;
        converttochildrensumtree(t->left);
        converttochildrensumtree(t->right);
if(t->left!=NULL)
    l=t->left->info;
if(t->right!=NULL)
    r=t->right->info;
    int diff=l+r-(t->info);
    if(diff>0)
    t->info=t->info+diff;
    else
    {
        t->left->info=t->left->info-diff;
        converttochildrensumtree(t->left);
    }
}
int diameter(node *t)
{
    if(t==NULL)
        return 0;
    int h1=heightoftree(t->left);
    int h2=heightoftree(t->right);
    int ld=diameter(t->left);
    int rd=diameter(t->right);
    return max((h1+h2+1),max(ld,rd));
}
int isheightbalanced(node *t)
{
    if(t==NULL)
        return 1;
    int h1=heightoftree(t->left);
    int h2=heightoftree(t->right);
    if((h1-h2<=1)&&isheightbalanced(t->left)&&isheightbalanced(t->right))
    return 1;
    return 0;

}
int ispathsumequaltonumber(node *t,int number)
{//wrong code
    if(t==NULL)
        return number==0;
    if((t->info==number &&(t->left==NULL && t->right==NULL))||(ispathsumequaltonumber(t->left,number-t->info)||ispathsumequaltonumber(t->right,number-t->info)))
       return 1;
    return 0;
}
void doubletree(node *t)
{
    if(t==NULL)
    return ;
    doubletree(t->right);
    node *temp=t->left;
    t->left=newNode(t->info);
    t=t->left;
    t->left=temp;
    doubletree(t->left);
}
int sum=0;
int widthoftree(node *t,int l)
{
    if(t==NULL)
        return 0;
        if(l==1)
        {
            return 1;
        }
        else
        {
          return  (widthoftree(t->left,l-1)+widthoftree(t->right,l-1));
        }
}
int isfoldabletree(node *,node *);
int isfoldable(node *t)
{
    if(t==NULL)
        return 1;
    return isfoldabletree(t->left,t->right);
}
int isfoldabletree(node *t1,node *t2)
{
    if(t1==NULL &&t2==NULL)
        return 1;
    if(t1==NULL &&t2!=NULL)
        return 0;
    if(t1!=NULL &&t2==NULL)
        return 0;
    if(isfoldabletree(t1->left,t2->right)&&isfoldabletree(t1->right,t2->left))
            return 1;
    return 0;
}
int findlevel(node *t,int key,int d)
{
if(t==NULL)
    return 0;
if(t->info==key)
    return d;
return
   findlevel(t->left,key,d+1)|
   findlevel(t->right,key,d+1);
}
int printancestors(node *t,int data)
{
    if(t==NULL)
        return 0;
    if(t->info==data)
        return 1;
if(printancestors(t->left,data) || printancestors(t->right,data))
    cout<<t->info<<" ";
}
void print_between_k1_n_k2(node *t,int k1,int k2)
{
    if(t==NULL)
        return;
    if(t->info==k1||t->info==k2)
        cout<<t->info;
    if(t->info>k1&&t->info<k2)
        {
            cout<<t->info<<" ";
            print_between_k1_n_k2(t->left,k1,k2);
            print_between_k1_n_k2(t->right,k1,k2);
        }
        if(t->info<k1&&t->info<k2)
            print_between_k1_n_k2(t->right,k1,k2);
        if(t->info>k1 && t->info>k2)
            print_between_k1_n_k2(t->left,k1,k2);
}
int isleaf(node *leaf)
{
    if(leaf==NULL)
        return 0;
    if(leaf->left==NULL &&leaf->right==NULL)
        return 1;
    return 0;
}
int issumtree(node *t)
{
    int ls,rs;
    if(t==NULL||isleaf(t))
        return 1;
    if(issumtree(t->left) && issumtree(t->right))
    {
        if(t->left==NULL)
          ls=0;
        else if(isleaf(t->left))
        {
            ls=t->left->info;
        }
        else
        {
                ls=2*t->left->info;
        }
       if(t->right==NULL)
                rs=0;
       else if(isleaf(t->right))
           rs=t->right->info;
        else
            rs=2*t->right->info;
        return (t->info==ls+rs) ;
    }
    return 0;

}
int converttosumtree(node *t)
{
   if(t==NULL)
        return 0;
 int old=t->info;
   t->info=converttosumtree(t->left)+converttosumtree(t->right);
    return old+t->info;
}
node *sortedarraytoBST(int a[],int l,int r)
{
    if(l>r)
        return 0;
    int mid=(l+r)/2;
    node *root5=newNode(a[mid]);
    root5->left=sortedarraytoBST(a,l,mid-1);
    root5->right=sortedarraytoBST(a,mid+1,r);
    return root5;
}
int sizeofsubBST(node *t)
{
        if(isbst(t,-1,99))
            return sizeoftree(t);
        else
            return max(sizeofsubBST(t->left),sizeofsubBST(t->right));
}
bool printPath (node *rot,int d)
{
    // base case
    if (rot == NULL)
        return false;

    // return true if this node is the target_leaf or target leaf is present in
    // one of its descendants
    if (rot->info == d || printPath(rot->left,d) ||
            printPath(rot->right,d) )
    {
        cout<<rot->info;
        return true;
    }

    return false;
}
int searchinorder(int in[],int d,int i,int j)
{
    for(int k=i;k<=j;k++)
    {
        if(in[k]==d)
        {
            return k;
        }
    }
}
node *maketree(int in[],int pr[],int i,int j)
{
    static int ptr=0;
    if(i>j)
        return NULL;
    node *t=newNode(pr[ptr]);
    ptr++;
    if(i==j)
        return t;
    int g=searchinorder(in,t->info,i,j);
    t->left=maketree(in,pr,i,g-1);
    t->right=maketree(in,pr,g+1,j);
    return t;
}
int maxelement(int ar[],int k,int l)
{
    int m=0;int s;
    for(int d=k;d<=l;d++)
    {
        if(ar[d]>m)
            m=ar[d];
            s=d;
    }
    return s;
}
node *makespecialtree(int inorder[],int i,int j)
{
    if(i>j)
        return NULL;
    int p=maxelement(inorder,i,j);
    node *t=newNode(inorder[p]);
    if(i==j)
       return t;
    t->left=makespecialtree(inorder,i,p-1);
    t->right=makespecialtree(inorder,p+1,j);
    return t;
}
void inordertree(node *re)
{
    if(re==NULL)
        return;
    inordertree(re->left);
    cout<<re->info<<" ";
    inordertree(re->right);
}
node *makeanotherspecialtree(int pre[],char preln[],int *i,int n)
{
int k=*i;
    if(k==n)
        return NULL;
        node *t=newNode(pre[k]);
    (*i)++;
    if(preln[k]=='n')
    {
        t->left=makeanotherspecialtree(pre,preln,i,n);
        t->right=makeanotherspecialtree(pre,preln,i,n);
    }
    return t;
}
int haveonlyonechild(int pr[],int n)
{
    for(int i=0;i<n;i++)
    {
       if((pr[i]-pr[i+1])*(pr[i]-pr[n-1])<0)
        return 0;
    }
        return 1;
}
void printleaves(node *t)
{
    if(t)
    {
      printleaves(t->left);
      if(t->left==NULL && t->right==NULL)
        cout<<t->info<<" ";
      printleaves(t->right);
    }
}
void printlefttoright(node *t)
{
    if(t &&(t->left!=NULL || t->right!=NULL))
        {cout<<t->info<< " ";
        printlefttoright(t->left);
        }
}
void printrighttoleft(node *t)
{
    if(t&&(t->left!=NULL || t->right!=NULL))
    {
        printrighttoleft(t->right);
        cout<<t->info;
    }
}
void boundrytraversal(node *t)
{
    cout<<t->info<<" ";
    printlefttoright(t->left);
    printleaves(t->left);
    printleaves(t->right);
    printrighttoleft(t->right);
}
int ceil(node *t,int key)
{
    if(t==NULL)
        return -1;
    if(t->info==key)
        return t->info;
    else if(t->info<key)
        return ceil(t->right,key);
    else
    {
        int ceilvalue=ceil(t->left,key);
        if(ceilvalue>key) return ceilvalue;
    else
        return t->info;
    }
}
int floor(node *t,int key)
{
    if(t==NULL)
        return -1;
    if(t->info==key)
        return t->info;
    if(key<t->info)
            return floor(t->left,key);
    else
    {
            int floorvalue=floor(t->right,key);
            if(floorvalue<key && floorvalue!=-1)
                return floorvalue;
            else
                return t->info;
        }
}
void convertBsttobinarytree(node *t)
{
    static int s=0;
    if(t==NULL)
        return;
    convertBsttobinarytree(t->right);
    s=s+t->info;
    t->info=s;
    convertBsttobinarytree(t->left);
}
void correctBST(node* t,node** first,node** middle,node**last,node** prev)
{
    if(t)
    {
        correctBST(t->left,first,middle,last,prev);
        if(*prev && t->info<(*prev)->info)
            {
                if(!*first)
                {*first=*prev;
                    *middle=t;
                    //cout<<endl<<(*first)->info;
                }
                else
                    *last=t;
            }
            *prev=t;
            correctBST(t->right,first,middle,last,prev);
    }
}
void swapnodedata(int *q,int *r)
{
    int temp=*q;
    *q=*r;
    *r=temp;
}
void reverselevelorder(node *t,int level)
{
    if(t==NULL)
        return;
    if(level==1)
        cout<<t->info<<" ";
    else
        reverselevelorder(t->left,level-1);
        reverselevelorder(t->right,level-1);
}
node *arraytocompletebinarytree(int a[],int i)
{
    if(i>=6)
        return NULL;
    node *t=newNode(a[i]);
    t->left=arraytocompletebinarytree(a,2*i+1);
    t->right=arraytocompletebinarytree(a,2*i+2);
    return t;

}
int isisomorph(node *t1,node *t2)
{
    if(t1==NULL && t2==NULL)
        return 1;
    if(t1==NULL ||t2==NULL)
            return 0;
    if(t1->info!=t2->info)
        return 0;
    return (isisomorph(t1->left,t2->left)&&isisomorph(t1->right,t2->right))||
            (isisomorph(t1->left,t2->right)&&isisomorph(t1->right,t2->left));
}

int main()
{
    root1 = newNode(1);
    root1->left = newNode(2);
    root1->right = newNode(3);
    root1->left->left  = newNode(4);
    root1->left->right = newNode(5);
    //root1->left->right->left=newNode(6);

    node *root2 = newNode(1);
    root2->left = newNode(2);
    root2->right = newNode(3);
    root2->left->left = newNode(4);
    root2->left->right = newNode(5);
    //preorder(root1);
    node *root=newNode(20);
    root->left=newNode(8);
    root->left->left=newNode(4);
    root->left->right=newNode(12);
    root->left->right->left=newNode(10);
    root->left->right->right=newNode(14);
    root->right=newNode(22);
node *root3  = newNode(10);
  root3->left         = newNode(8);
  root3->right        = newNode(2);
  root3->left->left   = newNode(3);
  root3->left->right  = newNode(5);
  root3->right->right = newNode(2);
//cout<<sizeoftree(root1);
    cout<<endl;
    //if(isidentical(root1,root2))
    //cout<<"yes";
    //else
      //  cout<<"no";
      //int h=heightoftree(root1);
      //deletetree(root1);
    //  mirrortree(root1);
      //preorder(T);
      //roottoleaf(root1,0);
      //cout<<m;
      //printPath(root1,d);
      //preorder(root3);
     // preorder(root3);
      cout<<endl;
      //lowestcommonancestor(root,10,22);
    //for(int i=1;i<=h;i++)
      //levelorder(root1,i);
      //countleafnodes(root);
      //cout<<c;
      //if(isbst(root,-1,999))
        //cout<<"yes";
      //else
        //cout<<"no";
        //int l=1;;
        //for(int i=1;i<=h;i++)
        //{
         //   spirallevelorder(root1,i,-l);
          //  l=-l;
        //}
    //  if(checksumproperty(root3))cout<<"yes";
     // else
       // cout<<"no";
       //converttochildrensumtree(root1);
       //preorder(S);
       //cout<<diameter(root);
       //if(isheightbalanced(root1))cout<<"yes";
       //else
        //cout<<"no";
        //if(ispathsumequaltonumber(root1,8))
          //  cout<<"yes";
        //else
          //  cout<<"no";
          //doubletree(root1);
          //int maxwidth=0;
         /* for(int k=1;k<=h;k++)
          {
          int w=widthoftree(root1,k);
          if(w>maxwidth)
            maxwidth=w;
          }
          cout<<maxwidth;*/
          //preorder(root1);
          //if(isfoldable(root1))cout<<"yes";
          //else cout<<"no";
          //cout<<findlevel(root1,3,1);
          //printancestors(root,10);
          //print_between_k1_n_k2(root,7,23);
          //if(issumtree(root3))cout<<"yes";
          //else
            //cout<<"no";
          //preorder(root3);
          //converttosumtree(root1);
          //int a[]={1, 2, 3, 4, 5, 6, 7};
          //root5=sortedarraytoBST(a,0,6);
          //preorder(root5);
          //int o=sizeofsubBST(root1);
          //cout<<o<<endl;
          //if(hasonlyoneleaf(root1))cout<<"yes";
          //else
            //cout<<"no";
            //int a[5];
            //storeinorrder(root1,a,0);
            //int in[]={4,2,5,1,6,3};
            //int pr[]={1,2,4,5,3,6};
            //int pr[]={16,11,12,13,14,15,};
            //int inorder[]={5,10,40,30,28};
            //node *r=maketree(in,pr,0,5);
            //cout<<r->info;
            //int pre[]={10,30,20,5,15};
            //char preln[]={'n','n','l','l','l'};
            //int i=0;

            //node *r=makeanotherspecialtree(pre,preln,&i,5);
            //preorder(r);
            /*int w=haveonlyonechild(pr,6);
            if(w==1) cout<<"yeeeah baby";
            else  cout<<"NO";*/
            //boundrytraversal(root3);
            //cout<<ceil(root3,7)<<endl;
            //cout<<floor(root3,7);
           preorder(root);
            cout<<endl;
            //int s=0;
            convertBsttobinarytree(root);
            preorder(root);
            /*int h=heightoftree(root);
            for(int i=h;i>0;i--)
            {

             reverselevelorder(root,i);
            cout<<endl;
            }*/
            /*struct node *root = newNode(6);
    root->left        = newNode(10);
    root->right       = newNode(2);
    root->left->left  = newNode(1);
    root->left->right = newNode(3);
    root->right->right = newNode(12);
    root->right->left = newNode(7);
inordertree(root)*/;
cout<<endl;

            node *first,*middle,*last,*prev;
            first=middle=last=prev=NULL;
            correctBST(root,&first,&middle,&last,&prev);
            if(first && last)
            {
                swapnodedata(&(first->info),&(last->info));
            }
            else if(first && middle)
            {
                swapnodedata(&(first->info),&(middle->info));
            }
            //inordertree(root);
          /*  int ar[]={10,12,15,25,30,36};
            node *roots=arraytocompletebinarytree(ar,0);
            preorder(roots);*/
    /*         struct node *n1 = newNode(1);
    n1->left        = newNode(2);
    n1->right       = newNode(3);
    n1->left->left  = newNode(4);
    n1->left->right = newNode(5);
    n1->right->left  = newNode(6);
    n1->left->right->left = newNode(7);
    n1->left->right->right = newNode(8);

    struct node *n2 = newNode(1);
    n2->left         = newNode(3);
    n2->right        = newNode(2);
    n2->right->left   = newNode(4);
    n2->right->right   = newNode(5);
    n2->left->right   = newNode(6);
    n2->right->right->left = newNode(8);
    n2->right->right->right = newNode(7);
            if(isisomorph(n1,n2)) cout<<"yes";
            else
                cout<<"no";*/
//                cout<<deepestoddlevelnode(root,1);

            return 0;
}
