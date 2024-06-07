#include<stdio.h>
#include<stdlib.h>
int sum(int c,int d)
{   
    int k;
    k=c+d;
    return k;
}
int main()
{  int a=10;
    int b=39;
    sum(a,b);
    printf("%d",sum(a,b));
    return 0;
}