#include<stdio.h> 

int main(){
    // Printing the given characters in reverse order

    char first,second,third;
    printf("first character \n");

    scanf(" %c",&first);

    printf("second character \n");
    scanf(" %c",&second);

    printf("third character \n");
    scanf(" %c",&third);

    printf(" Now printing  the enetered in reverse order \n");
    printf("%c %c %c", third, second, first);


return 0;
}