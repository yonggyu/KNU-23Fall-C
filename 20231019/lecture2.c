#include <stdio.h>
#include <stdlib.h>

struct Student {
    int sno;
    char name[10];
    int score;
};

int main(void)
{
    int num, sum = 0;
    printf("학생수 입력 : ");
    scanf("%d", &num);
    struct Student* s;
    s = (struct Student *)malloc(num * sizeof(struct Student));

    for (int i = 0; i < num; i++)
    {
        printf("학생 %d-%d 학번 입력: ", num, i+1);
        scanf("%d", &s[i].sno);
        printf("학생 %d-%d 이름 입력: ", num, i+1);
        scanf("%s", s[i].name);
        printf("학생 %d-%d 성적 입력: ", num, i+1);
        scanf("%d", &s[i].score);
        printf("\n");
    }

    for (int j = 0; j < num; j++)
    {
        sum += s[j].score;
    }

    //메모리 해제!!
    free(s);
    s = NULL;

    printf("총점: %d\n", sum);
    printf("평균 점수: %d\n", sum / num);

    return 0;
}