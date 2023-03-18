//Calc Tax

#include <stdio.h>
#define TAX 0.05

int main(void)
{
    float amount, total;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    total = amount * (1 + TAX);

    printf("With tax added: %.2f", total);
    return 0;
}