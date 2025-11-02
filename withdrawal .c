//system to display balances after withdrawals 
/*
name:Miyoge Sharon Nyatichi
reg no:PA106/G/28785/25
description:program to display balances after withdrawals 
*/
#include<stdio.h>

int main() {
    float balance = 1000.0;
    float withdrawal;
while (balance > 0) {
printf("Current balance: %.2f\n", balance);
printf("Enter amount to withdraw: ");
scanf("%f", &withdrawal);

if (withdrawal > balance) {
printf("Insufficient balance!\n");
} else {
balance -= withdrawal;
printf("Balance after withdrawal: %.2f\n", balance);
}
}

printf("Your account balance is now 0. Exiting...\n");
    return 0;
}


