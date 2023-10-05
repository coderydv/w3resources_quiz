#include<stdio.h> 

int main(){
    // Finding area and perimeter of circle by input of radius from user

 float radius, pi=3.14;
    printf(" Enter the radius of circle \n");
    scanf(" %f",&radius);

    printf("The perimeter of circle with given radius is : %.2f \n", 2*pi*radius);
    printf(" The area  of circle with given radius is : %.2f \n", pi*radius*radius);
return 0;
}