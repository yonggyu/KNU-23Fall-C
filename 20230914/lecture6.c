#include <stdio.h>

int main(void)
{
    int input_num;

    printf("정수 입력: ");
    scanf("%d", &input_num);

    if(input_num > 0) {
        printf("양의 정수이다.\n");
    } 
    else if(input_num == 0) {
        printf("0이다\n");
    }
    else {
        printf("음의 정수이다.\n");
    }
}