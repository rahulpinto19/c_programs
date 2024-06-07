#include<stdio.h>
int main()
{
    int pin,p,amount,balance;
    pin=1234;
    balance=3000;
    printf("\n\n enter the pin");
    scanf("%d",&p);
    if(pin==p)
   {
    printf("\n\n please enter the amount");
    scanf("%d",&amount);
    if (amount>balance)
    {
        printf("\n\n invalid transaction");
        scanf("%d",&amount);
    }
    else
    {
        printf("\%d",balance);
       }

    }
    else
    {
        printf("\n\n the pin u hincorrect");
    }


}
