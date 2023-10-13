#include<stdio.h> 

int main(){
    // Swapping  the values of integers without using the third integer

    int a, b;

    printf(" Enter the first Number : ");
    scanf("%d", &a);

    printf(" Enter the Second Number : ");
    scanf("%d", &b);

    printf(" \n\n ************ \n The values before swapping \nFirst Number : %d \n Second Number : %d \n\n\n", a,b);

     a += b;
     b= a-b;
     a=a-b;
     
    printf(" ************ \n The values after swapping \nFirst Number : %d \n Second Number : %d \n", a,b);
return 0;
} 