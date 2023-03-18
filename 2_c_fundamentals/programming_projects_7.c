#include <stdio.h>

int main(void)
{
    int dollar, b20, b10, b5, b1;

    printf("Enter a dollar amount: ");
    scanf("%d", &dollar);

    b20 = dollar / 20.0;
    b10 = (dollar - (b20 * 20)) / 10;
    b5 = (dollar - (b20*20) - (b10*10)) / 5;
    b1 = (dollar - (b20*20) - (b10*10) - (b5*5));
    printf("$20 bills: %d\n", b20);
    printf("$10 bills: %d\n", b10);
    printf("$5 bills: %d\n", b5);
    printf("$1 bills: %d\n", b1);

    return 0;
}