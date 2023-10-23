#include<stdio.h> 

int main(){
    //getting two integer as input from user and check whether is first integer is multiple of second

    int num1, num2;

    printf(" enter the first number : ");
    scanf("%d",&num1);
    

    printf(" enter the Second number : ");
    scanf("%d",&num2);

if (num1 >= num2)
{
    if ((num1%num2)==0)
    {
        printf("The %d is multiple of %d \n", num1,num2);
    }
    
}
else
{
    printf(" Enter correct values !!");
    
}

return 0;
}