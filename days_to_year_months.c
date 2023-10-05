#include<stdio.h> 

int main(){
    // Converting the user input of days in year, months and days
     int day,year,month,days;

     printf(" Enter the days for calculation : ");
     scanf(" %d",&day);

     year= day/365;
     month= (day % 365) / 30;
     days= day % 30;

     printf(" The number of years are :%d \n", (day / 365));
     printf(" Number of months are : %d  \n", (day / 30));
     printf(" The given days contain %d years %d Months and %d Days \n", year,month,days);
     printf(" This is end of the statement");

return 0;
}