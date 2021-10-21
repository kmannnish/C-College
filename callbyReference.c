#include <stdio.h>

int calc(int *x, int *y)
{
    int temp = *x;
    *x = *x + *y;
    *y = temp - *y;
    return 0;
}
int main()
{
    int a = 5, b = 2;
    printf("Value of A is %d\n", a);
    printf("Value of B is %d\n", b);
    calc(&a, &b);
    printf("Addition is %d\n", a);
    printf("Subtration is %d\n", b);
    return 0;
}