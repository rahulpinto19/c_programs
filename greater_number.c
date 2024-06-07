#include<stdio.h>
void main()
{
    int p,q,r;
    printf("enter any 3 numbers\n");
    scanf("%d",&p);
    scanf("%d",&q);
    scanf("%d",&r);
   if(p>q)
   {
       if (p>r)
       {
           printf("%d",p);
       }
       if(p<r)
          {
              printf("%d",r);
          }
        else
        {
            printf("oh fuck");
        }

   }

    if(p<q)
    {
        if(q<r)
        {
            printf("%d",r);
        }
        if(q>r)
        {
            printf("%d",q);
        }
    }
   }

