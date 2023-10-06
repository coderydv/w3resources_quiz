#include<stdio.h> 

int main(){
    // Employee id , Total worked hours and amount received per hour and printing salary upto two decimal places

    char id[10];// we have taken string as int or float type will drop zero if assigned before id.
    int hour; // it will create problem if we take floating point values.
    double wage,salary;// double is used as values are large , if we take float/int it will give trash values.

    printf("Enter the employee id : \n");
    scanf("%s",&id);

    printf("Enter the total working hours in given month : \n");
    scanf(" %d",&hour);
    printf("Enter the Average wage of employee per hour : \n");
    scanf(" %lf",&wage);
salary= hour*wage;
    printf(" Employee's ID = %s \n salary = U$ %.2lf \n", id, salary);
    

return 0;
}