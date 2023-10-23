#include<stdio.h> 

int main(){
    // program that reads two integers p and q, prints p number of lines in a sequence of 1 to b in a line

int p,q,i,j,l=1,max;
// P is number of lines
// Q is number of items in a line
printf("Enter the value of P : \n");
scanf("%d", &p);

printf("Enter the value of Q : \n");
scanf("%d", &q);

// printf("Enter the value of max : \n");
// scanf("%d", &max);


// code 01

for ( i = 1, l =1;i <= p ; i++)// two initializers can be used by use of comma sign and ended with semicolon sign
{
    for (j = 1; j <= q ; j++)
    {
        printf("%d ", l);
        l++;
    }
    printf("\n");
}

// Code 02
/*

    for (int i = 1; i <= p; i++) {
        for (int j = 1; j <= q; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
*/

return 0;
}


