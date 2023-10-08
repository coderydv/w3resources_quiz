#include<stdio.h> 

int main(){
    
    // Converting amount to possible bank notes.
    // Same code can be used to solve time to hours, Minutes and seconds.
    int total, thousand2,hundred5,hundred2,hundred1,fifty,twenty,ten;

    printf(" Enter the total amount :  ");
    scanf(" %d",&total);

    thousand2= total/2000;
    hundred5=((total%2000)/500);
    hundred2=((total%2000)%500)/200;
    hundred1=(((total%2000)%500)%200)/100;
    fifty=((((total%2000)%500)%200)%100)/50;
    twenty=(((((total%2000)%500)%200)%100)%50)/20;
    ten=((((((total%2000)%500)%200)%100)%50)%20)/10;


    printf(" The total Amount will have \n %d two thousand ruppes notes \n %d five hundred rupees notes \n %d Two hundred rupees notes \n %d Hundred rupees notes \n %d Fifty rupees notes \n %d twenty rupees notes \n %d ten rupees notes \n \n  That's is the total Bank notes.",thousand2,hundred5,hundred2,hundred1,fifty,twenty,ten);


printf(" The second solution is : \n");

 int amt;
 amt=total/2000;
 printf(" The amount will have \n 1. %d Notes of Rs. 2000. \n", amt);

    total= total- (amt*2000);

    amt= total/500;
 printf("2. %d Notes of Rs. 500. \n", amt);
total= total-(amt*500);

    amt= total/200;
 printf("3. %d Notes of Rs. 200. \n", amt);
total= total-(amt*200);

    amt= total/100;
 printf("4. %d Notes of Rs. 100. \n", amt);
total= total-(amt*100);

    amt= total/50;
 printf("5. %d Notes of Rs. 50. \n", amt);
total= total-(amt*50);

    amt= total/20;
 printf("6. %d Notes of Rs. 20. \n", amt);
total= total-(amt*20);

    amt= total/10;
 printf("7. %d Notes of Rs. 10. \n", amt);
total= total-(amt*10);

    amt= total/5;
 printf("8. %d Notes of Rs. 5 \n", amt);
total= total-(amt*5);

    amt= total/1;
 printf("9. %d Notes of Rs. 1 \n", amt);
 

return 0;
}