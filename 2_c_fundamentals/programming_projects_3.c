//use scanf function to read users input.

#include <stdio.h>
#define PI 3.14159265358979323846

int main(void)
{
    int radius;
    float v;
    printf("Enter Radius: ");
    scanf("%d", &radius);
    v = (4.0f / 3.0f) * PI * radius * radius * radius;
    printf("%.5f", v);

    return 0;
}