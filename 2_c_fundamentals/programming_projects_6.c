#include <stdio.h>

int main(void)
{
    float x, y;
    printf("x= ");
    scanf("%f", &x);

    y = ( ( ( ( 3 * x + 2 ) * x - 5 ) * x - 1 ) * x + 7 ) * x - 6;
    printf("%.2f", y);

    return 0;
}