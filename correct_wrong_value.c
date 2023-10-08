#include<stdio.h> 

int main(){
    // p,q,r,s from user and check conditions and print output of values correct or wrong.

    int p,q,r,s;

    printf(" Enter the Even integer for value of P : ");
    scanf("%d",&p);
    printf(" Enter the value of Q : ");
    scanf("%d",&q);
    printf(" Enter the value of R : ");
    scanf("%d",&r);
    printf(" Enter the value of S : ");
    scanf("%d",&s);

    if (p%2==0 && (p,q,r) > 0 && q > r && s > p && (r+s) > (p+q))
    {
        printf("Entered values are correct values \n");
    }
       else
    {
        printf("Entered values are wrong value \n");
    }
   

return 0;
}