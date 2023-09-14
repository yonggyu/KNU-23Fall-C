#include <stdio.h>

int main(void)
{
    int i = 1, j = 1;

    while (i <= 5) {
        while (j < i) {
            printf("    ");
            j++;
        }
        j = 1;
        if (i % 2 == 1) {
                printf("| O |");
            }
        else {
            printf("| X |");
        }
        printf("\n------------------\n");
        i++;
    }

    return 0;
}