#include<stdio.h> 
#include<math.h>

int main(){
    // Finding distance between two points 
// distance = sqrt((x2-x1)^2 + (y2-y1)^2

float x1,x2,y1,y2, distance;

printf("enter first point vide x :  ");
scanf(" %f", &x1);
printf("enter first point vide y :  ");
scanf(" %f", &y1);
printf("enter Second point vide x :  ");
scanf(" %f", &x2);
printf("enter Second point vide y :  ");
scanf(" %f", &y2);

distance= sqrt(pow(x2-x1,2)+ pow(y2-y1,2));

printf(" The distance between (%.2f,%.2f) and (%.2f,%.2f) is %.2f", x1,y1,x2,y2,distance);


return 0;
}