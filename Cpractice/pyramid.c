#include <stdio.h>

int main(void)
{
    int temp = 0;
    scanf("%d", &temp);
    printf("%d층 피라미드\n", temp);
    
    for (int i = 0; i < temp; i++)
    {   
        for (int j = i; j <= temp; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= (i*2); k++)
        {
            printf("*");
        }
        printf("\n");
    }
}