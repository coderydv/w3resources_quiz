#include<stdio.h> 

int main(){
    // finding average consumption of fuel in floating number after input from user
    // typecasted to float

    int distance, fuel, average;

    printf(" Enter distance covered )in KMs) :  ");
    scanf("%d", &distance);
    
    printf(" Enter fuel used by the bike :  ");
    scanf("%d", &fuel);
    
    average= distance/ fuel;

     printf(" The of fuel consumption of bike is %.2f \n",(float) average);
    

return 0;
}