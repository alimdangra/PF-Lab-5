#include <stdio.h>
int main()
{
    int choice;
    char bev,course;
    printf("Enter 1 for beverages, 2 for Main Course or 3 for Deserts");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("Enter M for mirinda, C for coke, S for sprite or D for diet");
        scanf(" %c",&bev);
        switch (bev)
        {
            case 'M':
                printf ("You have chosen Mirinda \n");
                printf("The price is 60");
                break;
            case 'D':
                printf ("You have chosen Diet \n");
                printf("The price is 80");
                break;
            case 'C':
                printf ("You have chosen Coke \n");
                printf("The price is 70");
            break;
            case 'S':
                printf ("You have chosen Sprite \n");
                printf("The price is 60");
            break;
        
        default:
            printf("invalid choice");
            break;
        }
        break;
    case 2 :
        printf("Enter B for biryani, K for Karahi, P for pulao");
        scanf(" %c",&course);
        switch (course)
        {
        case 'B':
            printf("You have chosen biryani");
            printf("The price is 350");
            break;
        case 'K':
            printf("You have chosen biryani");
            printf("The price is 400");
            break;
        case 'P':
            printf("You have chosen biryani");
            printf("The price is 350");
            break;
        
        default:
        printf("invalid choice");
            break;
        }
        
        break;
    case 3 :
    printf("Enter C for caramel, I for icecream or K for kunafa");
        scanf(" %c",&course);
        switch (course)
        {
        case 'C':
            printf("You have chosen caramel");
            printf("The price is 500");
            break;
        case 'I':
            printf("You have chosen icecream ");
            printf("The price is 300");
            break;
        case 'K':
            printf("You have chosen kunafa");
            printf("The price is 1000");
            break;
        break;
    
    default:
    printf("invalid choice");
        break;
    
    

    }


}
}
