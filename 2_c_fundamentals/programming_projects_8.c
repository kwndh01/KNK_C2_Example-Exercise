#include <stdio.h>

int main(void)
{
    float loan, rate, monthlyPayment, remain;
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthlyPayment);

    loan = loan - monthlyPayment + loan * rate / 12 * 0.01;
    printf("Balance remaining after first payment: $%.2f\n", loan);
    loan = loan - monthlyPayment + loan * rate / 12 * 0.01;
    printf("Balance remaining after second payment: $%.2f\n", loan);
    loan = loan - monthlyPayment + loan * rate / 12 * 0.01;
    printf("Balance remaining after third payment: $%.2f\n", loan);

    return 0;
}