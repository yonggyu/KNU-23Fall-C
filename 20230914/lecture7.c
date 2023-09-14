#include <stdio.h>

int main(void)
{
    int jumsu;

    printf("점수를 입력하세요: ");
    scanf("%d", &jumsu);

    if(jumsu > 100 || jumsu < 0) {
        printf("잘못 입력하였습니다.\n");
    }
    else if(jumsu >= 90) {
        printf("A학점 입니다.\n");
    }
    else if(jumsu < 90 && jumsu >= 80) {
        printf("B학점 입니다.\n");
    }
    else if(jumsu < 80 && jumsu >= 70) {
        printf("C학점 입니다.\n");
    }
    else if(jumsu < 70 && jumsu >= 60) {
        printf("D학점 입니다.\n");
    }
    else if(jumsu < 60) {
        printf("F학점 입니다.\n");
    }
}