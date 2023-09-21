#include <stdio.h>

int factTo(int num);
int main(void) 
{
    int x;
    printf("팩토리얼 값 입력 : ");
    scanf("%d", &x);

    printf("%d", factTo(x));

    return 0;
}

int factTo(int num)
{
    if (num == 1) {
        return num;
    }

    return num * factTo(num - 1);
}