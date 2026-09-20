#include <stdio.h>
int main(){
    int num1,num2,num3,num4;
    printf("Enter 4 numbers: \n");
    scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
    if (num1 > num2){
        if (num1 > num3)
        {
            if (num1 > num4){
                printf("the lrgest number is %d",num1);
            }
        }
    }
    if (num1 > num2){
        if (num1 > num3)
        {
            if (num1 > num4){
                printf("the lrgest number is %d",num1);
            }
        }
    }
    if (num2 > num1){
        if (num2 > num3)
        {
            if (num2 > num4){
                printf("the lrgest number is %d",num2);
            }
        }
    }
    if (num3 > num1){
        if (num3> num2)
        {
            if (num3 > num4){
                printf("the lrgest number is %d",num3);
            }
        }
    }if (num4 > num1){
        if (num4 > num2)
        {
            if (num4 > num3){
                printf("the lrgest number is %d",num4);
            }
        }
    }
}