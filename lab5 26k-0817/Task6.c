#include <stdio.h>
#include <math.h>

int main()
{
    int choice,num1,num2,ans;
    char operator;
    printf("enter 1 for basic arethmetic and 2 for power/square root ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf(" enter the operator (+,-,/,*)you want to perform");
        scanf(" %c",&operator);
        printf("enter 2 numbers");
        scanf("%d %d",&num1,&num2);

        switch (operator)
        {
        case '+':
        ans = num1 + num2;
        printf ("the sum is %d \n",ans);
        break;
        case '-':
        ans = num1 - num2;
        printf ("the difference is %d \n",ans);
        break;
        case '/':
        ans = num1/num2;
        printf ("the divisible is %d \n",ans);
        break;
        case '*':
        ans = num1 * num2;
        printf ("the product  is %d \n",ans);
        break;
    
    default:
        printf("invalid choice");
        break;
    }
    break;
    
    case 2:
    printf("enter the operator(r-square root/s - power) you want to perform");
    scanf(" %c",&operator);
    switch (operator)
    {
        case 's':
            printf("enter a numbers: \n");
            scanf("%d",&num1);
            ans = pow(num1,2);
            printf("the square of the number is: %d",ans);
        break;

        case 'r':
        printf("enter a number: \n");
            scanf("%d",&num1);
            ans = sqrt(num1);
            printf("the square root of the number is: %d",ans);
        break;

        default:
            printf("enter invalid choice");
            break;
    }
    break;
    
    default:
    printf("invalid choice");
        break;
    }

}