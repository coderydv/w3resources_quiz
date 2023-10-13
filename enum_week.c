#include<stdio.h> 

int main(){
    // Use of Enum operator for displaying of week days

    enum{Sunday, Monday,Tuesday, Wednesday, Thursday, Friday, Saturday};
    printf(" Sunday     =   %d \n", Sunday);
    printf(" Monday     =   %d \n", Monday);
    printf(" Tuesday    =   %d \n", Tuesday);
    printf(" Wednesday  =   %d \n", Wednesday);
    printf(" Friday     =   %d \n", Friday);
    printf(" Saturday   =   %d \n", Saturday);

return 0;
}