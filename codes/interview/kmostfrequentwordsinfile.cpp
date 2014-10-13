#include<iostream>
using namespace std;
struct trienode
{
    int heapindex;
    int isend;
    int frequency;
    trienode *child[26];
};
struct minheapnode
{
    int frequency;
    trienode *root;
    char *word;
};
struct minheap
{
    int size;
    int count;
    minheapnode *a;
};
trienode *newtrienode()
{
    trienode *node=new trienode;
    node->frequency=0;
    node->isend=0;
    node->heapindex=-1;
    for(int i=0;i<26;i++)
        node->child[i]=NULL:
            return node;
}
minheap *createminheap(int size)
{
    minheap *heapnode=new minheap;
    minheap->size=size;
    minheap->count=0;
    minheap->a=new minheapnode[minheap->size];
    return minheap;
}
void swap(minheapnode *a,minheapnode *b)
{
    minheapnode temp=*a;
    *a=*b;
    *b=temp;
}
void minheapify(minheap *minhp,int i)
{
    int l=2*i+1;
    int r=2*i+2;
    int s=i;
    if(l<minhp->count && minhp->a[l].frequency<minhp->a[i].frequency)
        s=l;
    if(r<minhp.count && minhp->a[r].frequency<minhp->a[i].frequency)
        s=r;
    if(s!=i)
    {
        minhp->a[s].root->heapindex=i;
        minhp->a[i].root->heapindex=s;
        swap(&minp->a[s],&minhp->a[i]);
        minheapify(minhp,s);
    }
}
void buildminheap(minheap *minhp)
{
    int n=minhp->count-1;
    for(int i=(n-1)/2;i>=0;i--)
        minheapify(minhp,i);
}
void insertinminheap(minheap *minhp,trienode **root,char *word)
{
    if((*root)->heapindex!=-1)
    {
        (minhp->a[(*root)->heapindex].frequency)++;
        minheapify(minhp,(*root)->heapindex);
    }
    else if(minhp->count<minhp->size)
    {
        int c=minhp->count;
        minhp->a[c].frequency=(*root)->frequency;
        minhp->a[c].word=new char[strlen(word)+1];
        strcpy(minhp->a[c].word,word);
        minhp->a[c].root=*root;
        (*root)->heapindex=minhp->count;
         (minhp->count)++;
         buildminheap(minhp);
    }
    else if((*root)->frequency>minhp->a[0].frequency)
    {
        minhp->a[0].root->heapindex=-1;
        minhp->a[0].root=*root;
        minhp->a[0].root->heapindex=0;
        minhp->a[0].frequency=(*root)->frequency;
        delete []minhp->a[0].word;
        minhp->a[0].word=new char[strlen(word)+1];
        strcpy(minhp->a[0].word,word);
        minheapify(minhp,0)'
    }
}
void insert(trienode **root,minheap *minhp,char *word,char *dupword)
{
    if(*root==NULL)
        *root=new trienode;
    if(*word !='\0')
        insert(&((*root)->child[tolower(*word)-97]),minhp,word+1,dupword);
    else
    {
        if((*root)->end)
            ((*root)->frequency)++;
        else
        {
            (*root)->end=1;
            (*root)->frequency=1;
            (*root)->frequency=1;
        }
        insertinminheap(minhp,root,dupword);
    }
}
void display(minheap *minhp)
{
    for(int i=0;i<minhp->count;i++)
    {
        cout<<minhp->a[i].word<<" "<<minhp->a[i].frequency<<endl;
    }
}
int main()
{


}
