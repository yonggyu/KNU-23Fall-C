#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void)
{
    double x = 0;
    double y = 0;

    double count = 0, circle = 0;

    int percent = 0;

    srand(time(NULL));

    while (count < 100000) {
        x = (double) rand() / (double) RAND_MAX;
        y = (double) rand() / (double) RAND_MAX;
        count++;

        if((x * x) + (y * y) <= 1){
                circle++;
        }

        percent = count / 1000;

        printf("%d%%진행.. 원주율 : %lf ", percent, (circle / count) * 4);
        printf("\n");

    }

    return 0;
}