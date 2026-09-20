#include <stdio.h>
int main()
{
    char lights;
    char ped;
    printf("Enter R for red, G for green or Y for yellow \n");
    scanf(" %c",&lights);
    switch (lights)
    {
    case'R':
        printf("enter Y if pedestrian button is pressed and N if otherwise \n ");
        scanf(" %c",&ped);
        switch (ped){
        
            case 'Y':
                printf("The signal is closed but the Pedestrian button is pressed \n");
            break;
            case 'N' :
                printf("The signal is closed and the pedestrian button is also closed \n");
            break;
        default:
            printf("Invalid choice");
            break;
        }
    break;
    case'Y':
        printf("enter Y if pedestrian button is pressed and N if otherwise \n ");
        scanf(" %c",&ped);
        switch (ped){
        
            case 'Y':
                printf("The signal is yellow but the Pedestrian button is pressed \n");
            break;
            case 'N' :
                printf("The signal is yellow and the pedestrian button is not pressed \n");
            break;
        default:
            printf("Invalid choice");
            break;
        }
    break;

    case'G':
        printf("enter Y if pedestrian button is pressed and N if otherwise \n ");
        scanf(" %c",&ped);
        switch (ped){
        
            case 'Y':
                printf("The signal is open but the Pedestrian button is pressed \n");
            break;
            case 'N' :
                printf("The signal is open and the pedestrian button is not pressed \n");
            break;
        default:
            printf("Invalid choice");
            break;
        }
        break;
        default:
        printf("Invalid choice");
        break;

        }
    
    
    }
