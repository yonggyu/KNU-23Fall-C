#include <stdio.h>

int main(void)
{
    int i = 2, j = 1;

    while (i <= 9) {
        while (j <= 9) {
            if (i == 5) {
                i++;
                continue;
            }
            printf("%d x %d = %d\n", i, j, i * j);
            j++;
        }
        i++;
        j = 1;
    }
    
    return 0;
}