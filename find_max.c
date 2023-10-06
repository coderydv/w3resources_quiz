#include<stdio.h> 

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
    
return 0;
}