#include <stdio.h>

int main(void)
{
    int year;
    printf("연도 입력: ");
    scanf("%d", &year);

    if(year % 4 == 0 && year % 400 == 0 && year % 100 != 0) 
    {
        printf("윤년입니다.\n");
    } else {
        printf("윤년이 아닙니다.\n");
    }
}