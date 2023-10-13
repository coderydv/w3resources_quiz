#include<stdio.h> 

int main(){
    // Getting three floating point numbers and check feasibility of triangle and find the perimeter of triangle.

    float side1,side2,side3,perimeter;

    printf(" Enter First side : ");
    scanf("%f",&side1);
    
    printf(" Enter Second side : ");
    scanf("%f",&side2);

    printf(" Enter Third side : ");
    scanf("%f",&side3);
    

    if ((side1+side2)> side3 && (side2+side3)> side1 && (side3+side1)>side2)
    {
            printf(" Triangle can be made from given sides \n The perimeter of given triangle is %.2f \n", (side1+side2+side3));
    }
    else
    {
        printf(" Triangle can't be formed from given sides enter diffrent sides");
    }
    
return 0;
}