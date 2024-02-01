#include<stdio.h> 
#include<math.h>
int main(){
    
    int a,b,sample,ans=0;

    printf("Enter a number less than 100 for the series calculation: ");
    scanf("%d",&a);
    sample= pow(a,2);
    printf("%d raised to power  Two is equal to %d \n", a, sample);


    if ( a < 1 || a > 100 )
    {
        printf("Enter a value a between 1 to 100 \n");
        return 1; // Returning with error code
    }
    

    for (b = 0; b <= a; b++)
    {
        ans += pow(b , 4);        
    }
    printf("The result is %d \n", ans);
       
return 0;
}