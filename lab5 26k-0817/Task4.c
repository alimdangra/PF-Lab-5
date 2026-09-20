#include<stdio.h>
int main()
{
    char consumer;
    int units,bill;
    printf("enter consumer type  D for domestic and C for commercial");
    scanf(" %c",&consumer);
    printf("enter the units");
    scanf("%d",&units);
    if(consumer == 'D' || consumer == 'd'){
        if (units <=100){
            bill = units * 15;
        }
        else if (units > 100 && units <= 300)
        {
            bill = units * 20;                                                                                                                                          
        }
    }
    else if(consumer == 'C' || consumer == 'c')
    {
        if (units <=100){
            bill = units * 22;
        }
        else if (units > 100 && units <= 300)
        {
            bill = units * 30;                                                                                                                                          
        }
    }
    else{
        printf("invalid choice");
    }
    printf("the bill is :%d \n",bill);

} 