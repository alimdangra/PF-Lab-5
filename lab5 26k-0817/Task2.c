#include <stdio.h>
#include <ctype.h>
int main()
{
    int week = 50, weekend = 80,age,price;
    char ans,ans1 ;
    printf("enter th age: \n ");
    scanf("%d",&age);
    printf("enter w for week day and h for weekend");
    scanf(" %c",&ans);
    ans1 = toupper(ans);
    if (ans1 == 'W'){
        if (age <12 || age >60){
            price = week * 0.8 ; 
            printf("the discountd price is %d \n",price);
        }
        else {
            printf("the price is %d \n",week);
        }
    }
    else if (ans1 == 'H'){
        price = weekend * 0.8 ;
        if (age <12 || age >60) {
            printf("the discountd price is %d \n",price);
        }
        else{
            printf("the price is %d \n",weekend);
        }
    }

    else{
        printf("invalid input try again");
    }

    
}
