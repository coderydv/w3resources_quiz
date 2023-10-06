#include<stdio.h> 

int main(){
    // Finding average of weight and purchase of items 

    float weight1=15, weight2=25, avg=0;
    int item1=5, item2=4;
    
    avg= ((weight1*item1)+(weight2*item2))/(item1+item2);

    printf(" The average of above values is : %.2f ", avg);

return 0;
}