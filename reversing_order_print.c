#include <stdio.h>

int main()
{
    // Getting input from user and printing it in reverse order

    int num, middle=0, reverse = 0;

    printf("Enter a integer for reversing : ");
    scanf("%d", &num);

    printf(" The Original value inputted by user is : %d\n", num);

    while (num >0)
    {
        reverse = num % 10; // used to get last digit of number
        middle = middle * 10 + reverse; // Build the reversed number
        num = num / 10; // Removing last digit from original number
    }
    printf(" The reverse order is %d  \n", middle);

    return 0;
}