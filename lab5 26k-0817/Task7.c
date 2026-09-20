#include <stdio.h>
int main()

{
    char depart;
    int sem;
    printf("enter C for computer science , E for electrical engineering and B forbuisness");
    scanf(" %c",&depart);
    printf("Enter the semester: \n");
    scanf("%d",&sem);
    switch (depart)
    {
    case 'C':

        switch (sem)
        {
        case 1:
            printf("The course offered are \n");
            printf("Calculus \n");
            break;
        
        case 2:
            printf("The course offered are \n");
            printf("Object-Oriented Programming");
            break;
        case 3:
            printf("The course offered are \n");
            printf("Digital Logic Design");
            break;
        case 4:
            printf("The course offered are \n");
            printf("Operating Systems");
            break;
        case 5:
            printf("The course offered are \n");
            printf("Computer Networks");
            break;
        case 6:
            printf("The course offered are \n");
            printf("Compiler Construction");
            break;
        case 7:
            printf("The course offered are \n");
            printf("Parallel and distributed Computing");
            break;
        case 8:
            printf("The course offered are \n");
            printf("Internship");
            break;
    
        
        default:
            printf("invalid input");
            break;
        }
        
        break;

    case 'E':
        switch (sem)
        {
        case 1:
            printf("The course offered are \n");
            printf("Calculus \n");
            break;
        
        case 2:
            printf("The course offered are \n");
            printf("Object-Oriented Programming \n");
            break;
        case 3:
            printf("The course offered are \n");
            printf("Digital Logic Design \n ");
            break;
        case 4:
            printf("The course offered are \n");
            printf("Signals and System \n");
            break;
        case 5:
            printf("The course offered are \n");
            printf("Electrical Machines \n");
            break;
        case 6:
            printf("The course offered are \n");
            printf("Feedback Control System \n");
            break;
        case 7:
            printf("The course offered are \n");
            printf("Power Electronics");
            break;
        case 8:
            printf("The course offered are \n");
            printf("Enterprenuership & Professional");
            break;
    
        
        default:
            printf("Invalid choice");
            break;
        }
        
        break;
    case 'B':

        switch (sem)
        {
        case 1:
            printf("The course offered are \n");
            printf("Introduction to Buisness \n");
            break;
        
        case 2:
            printf("The course offered are \n");
            printf("Financial Accounting \n");
            break;
        case 3:
            printf("The course offered are \n");
            printf("Buisness Statistic \n ");
            break;
        case 4:
            printf("The course offered are \n");
            printf("Buisness Law \n");
            break;
        case 5:
            printf("The course offered are \n");
            printf("Production Management \n");
            break;
        case 6:
            printf("The course offered are \n");
            printf("Management Information Systems \n");
            break;
        case 7:
            printf("Internship \n");
            printf("Power Electronics");
            break;
        case 8:
            printf("The course offered are \n");
            printf("Strategic Management");
            break;
    
    default:
        printf("Invalid choice");
        break;
    }
    default:
    printf("invalid choice");
    break;
}
}