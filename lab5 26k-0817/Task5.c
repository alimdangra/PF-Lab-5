#include <stdio.h>
int main()
{
    int side1,side2,side3;
    printf("enter three side of the triangle");
    scanf("%d %d %d",&side1,&side2,&side3);
    if ((side1 + side2) > side3)
    {
        if ((side2 + side3) > side1){
            if ((side1 + side3) > side2){
                if((side1 == side2) && side2 == side3)
                {
                    printf("equilaterl triangle");
                }
                else if(side1 == side2){
                    printf("isoclese triangle");
                }
                else if(side2 == side3){
                    printf("isoclese triangle");
                }
                else if(side1 == side3){
                    printf("isoclese triangle");
                }
                else
                {
                    printf("scalene triangle");
                }


            }
        }
    }
    else{
        printf("Not a valid triangle");
    }

}