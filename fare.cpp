//system to calculate fare
/*
name:Miyoge Sharon Nyatichi
reg no:PA106/G/28785/25
description:program to calculate fare
*/
#include <stdio.h>#include <stdio.h>

int main() {
    float distance;
    float farePerKm = 50.0;
    float totalFare;

    printf("Enter distance (in km): ");
    scanf("%f", &distance);

    totalFare = distance * farePerKm;

    printf("Total fare = %.2f\n", totalFare);

    return 0;
}
