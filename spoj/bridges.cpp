#include<stdio.h>
#include<algorithm>
#include<cstring>
#include<climits>

struct node
{

    int s,t;
};
node a[1004];
int dp[1004];
bool check(int i,int j)
{

    int s1=a[i].s;
    int s2=a[i].t;


    int s3=a[j].s;
    int s4=a[j].t;



     if(s3==s1&&s4==s2)
       return true;


     if(s3<s1&&s2<s4)
        return false;

    if(s3==s1&&s4<s2)
       return false;



        return true;













}

bool comp(node a,node b)
{
    if(a.s<b.s)
      return true;

    else if(a.s==b.s)
    {
        if(a.t<=b.t)
          return true;


    }


    return false;
}

int main()
{

  int t,n;

  freopen("new.txt","r",stdin);
  scanf("%d",&t);

  while(t--)
  {

       scanf("%d",&n);
        for(int i=0;i<n;i++)
         scanf("%d",&a[i].s);
        for(int i=0;i<n;i++)
       {  scanf("%d",&a[i].t);
          dp[i]=1;
       }

       if(n==1)
         {
             printf("1\n");
             continue;

         }


         std::sort(a,a+n,comp);


       /*  for(int i=0;i<n;i++)
        printf("%d  %d\n",a[i].s,a[i].t);
        */
         //memset(dp,0,sizeof(dp));


         int max=1;
         for(int i=1;i<n;i++)
         {

             for(int j=i-1;j>=0;j--)
             {


                  if((a[i].t>=a[j].t)&&(dp[i]<(dp[j]+1)))
                    dp[i]=dp[j]+1;


             }

                   if(max<dp[i])
                      max=dp[i];




        }

      //  for(int i=0;i<n;i++)
       // printf("%d ",dp[i]);


         printf("%d\n",max);



  }


}
