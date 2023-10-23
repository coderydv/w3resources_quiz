#include<stdio.h> 

int main(){
    // Finding sum of numbers divisible by a number between two integers.

    int num1,num2,divisor,sum=0,i;

    printf("Enter the first number : \n");
    scanf("%d",&num1);

    printf("Enter the Second number : \n");
    scanf("%d",&num2);

    printf(" Enter the number by which it is to be divided : \n");
    scanf("%d", &divisor);

    for (i=num1; i <= num2; i++)
    {
        if ((i % divisor) != 0)
        {
            sum += i;
        }
        
    }
    printf("Sum is equal to : %d", sum);
return 0;
}