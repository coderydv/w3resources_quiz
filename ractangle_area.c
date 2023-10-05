#include<stdio.h> 

int main(){
    // Finding perimeter and area of ractangle  by input from user
    
    int length,breadth, perimeter, area;
    printf(" Enter length of ractangle \n");
    scanf(" %d", &length);
    printf(" Enter breadth of ractangle \n");
    scanf(" %d", &breadth);

    printf(" The perimeter of given ractangle is : %d inches \n", 2*(length+breadth));
    printf(" The area of given ractangle is : %d  square inches \n",length*breadth);
return 0;
}