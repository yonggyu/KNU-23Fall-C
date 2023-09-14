#include <stdio.h>

int main(void)
{
    int jumsu;

    printf("점수를 입력하세요: ");
    scanf("%d", &jumsu);

    if (jumsu > 100 || jumsu < 0)
        printf("잘못 입력하였습니다.\n");

    else {
        jumsu /= 10;
        switch(jumsu) {
            case 10:
            case 9:
                printf("A학점입니다\n");
                break;
            case 8:
                printf("B학점입니다\n");
                break;
            case 7:
                printf("C학점입니다\n");
                break;
            case 6:
                printf("D학점입니다\n");
                break;
            default:
                printf("F학점입니다\n");
                break;
        }
    }

    return 0;
}