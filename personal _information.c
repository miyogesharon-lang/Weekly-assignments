//system to display id, height and bank balance
/*
Name: Miyoge Sharon Nyatichi
Reg no:PA106/G/28785/25
description: program to display id, height and bank balance
*/
#include <stdio.h>
int main(){
    int id;
    float height;
    double bankbalance;

    printf("your id");
    scanf("%d", &id);
    
    printf("your height");
    scanf("%f", &height);
    
    printf("your bankbalance");
    scanf("%lf", &bankbalance);

    printf("Your id is: %d\n", id);
    printf("Your height is: %.2f \n", height);
    printf("Your bank balance is: %.2lf\n", bankbalance);

    return 0;
}