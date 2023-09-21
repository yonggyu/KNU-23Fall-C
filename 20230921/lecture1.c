#include <stdio.h>

int primeNumber(int num);

int main(void) {
    int temp;
    scanf("%d", &temp);

    printf("%d\n", primeNumber(temp));

    return 0;
}

int primeNumber(int num) 
{
    for (int div = num - 1; div > 1; div--)
    {
        if(num % div == 0) return 0;
    }
    return 1;
}