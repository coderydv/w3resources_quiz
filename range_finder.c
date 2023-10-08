#include<stdio.h> 

int main(){
    // integar input and find the range and show msg as correct value if input is negative or greater than 80

    int value;

    printf(" Enter a number : ");
    scanf(" %d", &value);

    if (value >= 0 && value <= 20)
    {
        printf(" The valid is in range of [0 -> 20 ]");
    }
    else if (value > 20 && value <= 40 )
    {
        printf(" The valid is in range of [20 -> 40 ]");
        
    }
    else if (value > 40 && value <= 60)
    {
        printf(" The valid is in range of [40 -> 60 ]");
    }
    else if (value > 60 && value <= 80)
    {
        printf(" The valid is in range of [60 -> 80 ]");
    }
    else 
    {
        printf(" Enter a valid value. ");
    }
   
   
    
return 0;
}

