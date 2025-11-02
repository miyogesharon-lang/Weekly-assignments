//system to convert Fahrenheit to celcius
/*
name:Sharon Nyatichi Miyoge
reg no:PA106/G/28785/25
description:program to convert Fahrenheit to celcius
*/
#include <stdio.h>


float convert_to_celsius(float f);

int main() {
    float f, c;
printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);

    c = convert_to_celsius(f);

    printf("Temperature in Celsius is: %.2f\n", c);
    return 0;
}

float convert_to_celsius(float f) {
    float c;
    c = (f - 32) * 5.0 / 9.0;
    return c;
}

