#include <stdio.h>

int main(int argc, char *argv[])
{
    double a = 0, b = 1;
    double h = 0.1;

    double x = a, y;

    for(; x <= b; x += h)
    {
        y = 1 / (x * x + 1);
        printf("x = %f, y = %f\n", x, y);
    }

    return 0;
}
