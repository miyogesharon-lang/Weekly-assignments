//system to display data table
/*
name:Miyoge Sharon Nyatichi
reg no:PA106/G/28785/25
description:program to display data table 
*/
#include <stdio.h>

int main() {
    int choice;

    printf("1. 100MB for KES 50\n");
    printf("2. 500MB for KES 200\n");
    printf("3. 1GB for KES 350\n");
    printf("4. 2GB for KES 600\n");

    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);


switch (choice) {
case 1:
printf("You selected 100MB for KES 50\n");
  break;

case 2:
printf("You selected 500MB for KES 200\n");
  break;

case 3:
printf("You selected 1GB for KES 350\n");
  break;

case 4:
printf("You selected 2GB for KES 600\n");
  break;

default:
printf("Invalid choice!\n");
   break;
    }

    return 0;
}
