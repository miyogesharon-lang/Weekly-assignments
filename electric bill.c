//system to display electric bill
/*
name:Miyoge Sharon Nyatichi
reg no:PA106/G/28785/25
description:program to display electric bill
*/


#include <stdio.h>

int main() {
    int units;
    int result = 0;

printf("Enter the number of units used: ");
scanf("%d", &units);

    if (units <= 100) {
        result = units * 10;
} 
    else if (units <= 200) {
        result = (100 * 10) + (units - 100) * 15;
} 
    else {
        result = (100 * 10) + (100 * 15) + (units - 200) * 20;
}

printf("The total bill is: %d\n", result);

    return 0;
}
