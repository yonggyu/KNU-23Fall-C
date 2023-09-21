#include <stdio.h>

int calculator(int selector, int num1, int num2);
int sum(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);

int main(void)
{
    int sel, num1, num2;

    printf("1. 더하기 2. 빼기 3. 곱하기 4. 나누기 : ");
    scanf("%d", &sel);
    printf("숫자 2개를 입력하세요(띄어쓰기로 구분)");
    scanf("%d %d", &num1, &num2);

    int temp = calculator(sel, num1, num2);
    printf("%d", temp);

    return 0;
}

int calculator(int selector, int num1, int num2)
{
    if (selector < 1 || selector > 4) {
        return 0;
    }
    if (selector == 1) return sum(num1, num2);
    else if (selector == 2) return sub(num1, num2);
    else if (selector == 3) return mul(num1, num2);
    else if (selector == 4) return div(num1, num2);
}

int sum(int num1, int num2)
{
    return num1 + num2;
}

int sub(int num1, int num2)
{
    return num1 - num2;
}

int mul(int num1, int num2)
{
    return num1 * num2;
}

int div(int num1, int num2)
{
    return num1 / num2;
}