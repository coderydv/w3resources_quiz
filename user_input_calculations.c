#include<stdio.h> 

int main(){
    //  Getting user from user and than performing arithematic calculations 
    // assuming first number inputted is always greater than second number

    int num1, num2;

    printf(" Enter  First number for arithematic calculations : ");
    scanf(" %d", &num1);
    printf(" Enter  Second number for arithematic calculations: ");
    scanf(" %d", &num2);

    printf(" The sum of given number is : %d \n", num1 + num2);
    printf(" first number minus second number = %d \n ", num1-num2); 
     printf(" Multiplication of given numbers is  :%d \n", num1 * num2);
     printf(" when first number is divided by second number then answer will be : %d", num1/num2);

return 0;
}