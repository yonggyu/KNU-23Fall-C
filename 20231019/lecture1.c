#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num, sum = 0;
    printf("학생수 입력 : ");
    scanf("%d", &num);
    int* score = (int *)malloc(num * sizeof(int));

    for (int i = 0; i < num; i++)
    {
        printf("학생 %d-%d 성적 입력: ", num, i+1);
        scanf("%d", &score[i]);
        sum += score[i];
    }

    printf("\n");

    for (int j = 0; j < num; j++)
    {
        printf("학생 %d-%d 성적 출력: %d\n", num, j+1, score[j]);
    }

    //메모리 해제!!
    free(score);
    score = NULL;

    printf("\n");

    printf("총점: %d\n", sum);
    printf("평균 점수: %d\n", sum / num);

    return 0;
}