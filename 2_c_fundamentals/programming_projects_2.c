//Computes the volume of a sphere with a 10-meter radius

#include <stdio.h>
#define PI 3.14159265358979323846

int main(void)
{
    int radius;
    float v;

    radius = 10;
    v = (4.0f / 3.0f) * PI * radius * radius * radius;
    printf("%.5f", v);

    return 0;
}