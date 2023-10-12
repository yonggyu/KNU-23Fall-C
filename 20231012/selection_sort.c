#include <stdio.h>

void swap(int *num1, int *num2);

int main(void)
{
    int arr[5] = {5, 4, 1, 2, 3};
    int min, index;
    
    for(int i = 0; i < 5; i++)
    {
        min = 240000;
        for(int j = i; j < 5; j++)
        {
            if(min > arr[j])
            {
                min = arr[j];
                index = j;
            }
        }
        swap(&arr[i], &arr[index]);
    }

    for(int k = 0; k < 5; k++)
    {
        printf("%d", arr[k]);
    }

    return 0;
}

void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}