/*
NAME: NDUNGU FRANCIS
REG: CT100/G/26209/25
DESCRIPTION:
A program that requests the user to enter hours worked in a week and hourly wage.
It then calculates and prints the gross pay, tax, and net pay.
*/

#include <stdio.h>

int main() {
    float hours, wage, grossPay, overtimePay, tax, netPay;

    // Ask for user input
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours);
    printf("Enter hourly wage: $");
    scanf("%f", &wage);

    // Calculate gross pay with overtime
    if (hours > 40) {
        float overtimeHours = hours - 40;
        overtimePay = overtimeHours * wage * 1.5;
        grossPay = 40 * wage + overtimePay;
    } else {
        grossPay = hours * wage;
    }

    // Calculate tax
    if (grossPay <= 6000) {
        tax = grossPay * 0.15f;
    } else {
        tax = 6000 * 0.15f + (grossPay - 6000) * 0.20f;
    }

    // Calculate net pay
    netPay = grossPay - tax;

    // Print results
    printf("\nGross Pay: $%.2f\n", grossPay);
    printf("Tax: $%.2f\n", tax);
    printf("Net Pay: $%.2f\n", netPay);

    return 0;
}

