#include <stdio.h>
int main()
{
    int choice,type;
    printf("Enter '1' for Savings or '2' for Current.");
    scanf("%d",&choice);
    printf("enter '1' for Deposit, '2' for Withdraw, or '3' for CheckBalance,");
    scanf("%d",&type);
    switch (choice)
    {
    case 1:
        switch (type)
        {
        case 1:
            printf("You have chosen Saving Account and Deposit");
            break;
        case 2:
            printf("You have chosen Saving Account and Cash Withdrawal");
            break;
        case 3:
            printf("You have chosen Saving Account and Balance Amount");
            break;
        
        default:
            printf("Invalid choice");
            break;
        }
        break;

    case 2:
    switch (type)
    {
    case 1:
            printf("You have chosen Current Account and Deposit");
            break;
        case 2:
            printf("You have chosen Current Account and Cash Withdrawal");
            break;
        case 3:
            printf("You have chosen Current Account and Balance Amount");
            break;
        
    
    default:
    printf("Invalid choice");
        break;
    }
    
    break;
    }
    
}