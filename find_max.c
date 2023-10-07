#include<stdio.h> 
#include<stdlib.h>

int main(){
    // Input from user and find maximum from user
    // we are assuming that user inserts ideal values according to code

    int first,second, third;

    printf("Enter the first number : \n");
    scanf(" %d", &first);
    printf("Enter the second number : \n");
    scanf(" %d", &second);
    printf("Enter the third number : \n");
    scanf(" %d", &third);

    /* Code 1

    if (first > second && first > third)
    {
        printf(" First number is Maximum \n");
    }
    else if (second > first && second > third)
    {
        printf(" Second number is maximum \n");
    }
    else if (third > first && third > second)
    {
        printf(" Third number is maximum \n");
    }
    else
    {
        printf(" Enter the valid values \n");

    }
    */

   printf(" **** Finding max from two numbers **** \n\n");
     int result,max;

     result = ((first + second)+ abs(first-second))/2;// abs is used to find the absolute value
    max= ((result+max)+abs(result-max))/2;

    printf(" The maximum between these numbers is %d \n\n", max);



return 0;
}