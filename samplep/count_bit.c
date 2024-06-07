#include<stdio.h>
#include<stdint.h>
#include<conio.h>
int main(void)
{
    uint32_t a =1024;
    int count=0;
    int i=0;
    for(i=0;i<32;i++)
    {
        if(a&1==1)
        count++;
        a>>=1;
    }
    printf("Number of ones are %d \nNumber of zeros are %d",count,32-count);
}