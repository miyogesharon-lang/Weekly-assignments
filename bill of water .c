//system to display the bill for units water consumed 
/*bill for units of water consumed
name:Miyoge Sharon Nyatichi
reg no:PA106/G/28785/25
description:system to display bill for the units water consumed 
*/
#include <stdio.h>
int main() {
int units;
float bill;

printf("Enter water units consumed: ");
scanf("%d", &units);

if (units <= 30) {
bill = units*20;}
else if (units <= 60) {
bill = units*25;} 
else {
bill = units*30;}
printf("Total water bill: %.2f KES\n", bill);


 return 0;
 }