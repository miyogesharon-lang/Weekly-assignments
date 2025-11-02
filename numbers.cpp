//system to display numbers in descending order
/*
name:Miyoge Sharon Nyatichi
reg no:PA106/G/28785/25
description:program to display numbers in descending order
*/
#include <stdio.h>

int main() {
    int numbers[51]; // 
    int count = 0;

    for (int i = 100; i >= 50; i--) {
printf("Enter number for i = %d: ", i);
scanf("%d", &numbers[count]);
count++;
    }


printf("The numbers are:\n");
    for (int i = 0; i < count; i++) {
printf("%d ", numbers[i]);
    }


    return 0;
}
