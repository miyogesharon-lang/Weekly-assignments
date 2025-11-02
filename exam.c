//program to display the eligibility of a student for an exam 
 /*eligibility for an exam 
name:Miyoge sharon Nyatichi
reg no:PA106/G/28785/25
description:system display  the eligibility of a student for an exam 
*/

#include<stdio.h>
int main(){
int attendance;
float averagemarks;

    printf("your attendance");
    scanf("%d",&attendance);
    printf("your averagemarks");
    scanf("%f",&averagemarks);
    
    if (attendance>=75 &averagemarks>=40){
    
   printf("not eligible\n");
    }
    return 0;
}