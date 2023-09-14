#include <stdio.h>

int main(void)
{
    int a, b, c, val1, val2, val3, val4, val5;
    a = 0, b = 5, c = 8;

    val1 = a && b;
    val2 = a || c;
    val3 = (a > b) && (a < c);
    val4 = !val3;
    val5 = b && c;

    printf("a = 0, b = 5, c = 8일 때\n");
    printf("a && b = %d\n", val1);
    printf("a || c = %d\n", val2);
    printf("(a > b) && (a < c) = %d\n", val3);
    printf("!val3 = %d\n", val4);
    printf("b && c = %d\n", val5);
}