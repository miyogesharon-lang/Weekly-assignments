//system to display the eligibility of a customer to get a loan
 /*eligibility for a loan
 name: Miyoge Sharon Nyatichi
 reg no:PA16/28785/25
 description : program to display the eligibity for a loan
 */
 #include <stdio.h>
 int main(){
 int age;
 float income;

 printf("Your age");
 scanf("%d", &age);
 printf("Your income ");
 scanf("%f", &income);

 if(age>=21 && income>=21000){
 printf("congratulations you qualify for the loan \n");
 } else {
 printf("unfortunately we are unable to offer you a loan at this time \n");
 }

return 0;
 }