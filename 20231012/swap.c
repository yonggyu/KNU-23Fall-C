#include <stdio.h>

void swap(int *num1, int *num2);

int main(void)
{
    int a = 1, b = 2;
    printf("%d %d\n", a, b);

    swap(&a, &b);

    printf("%d %d\n", a, b);

    return 0;
}

void swap(int *num1, int *num2)
{
    int temp;
    *num1 = temp;
    *num1 = *num2;
    *num2 = temp;
}