#include<stdio.h> 

int main(){
    // printing variables 
    int a=125, b= 12345;
    long ax= 1234567890;
    short s= 4043;
    float x= 2.13459;
    double dx= 1.1415927;
    char c= "W";
    unsigned long ux= 2541567890;

    // Printing variables 
    printf(" printing varibles  a + c = %d \n", a+c);
    printf(" x + c =  %f \n", x + c);
    printf( "dx + x = %f \n", dx + x);
    printf("typecasting dx to int and then addind ax = %ld \n", ((int)dx) + ax);
    printf(" ax + x = %f \n ", ax + x);
    printf(" S + B = %d \n", s+b);
    printf(" ax + b = %ld  \n", ax+ b);
    printf(" S + C = %d \n", s + c);
    printf(" ax + c = %ld \n", ax + c);
    printf(" ax + ux = %lu \n", ax + ux);

return 0;

}