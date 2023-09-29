#include <stdio.h>

void sum(int *arr, int size, int target)
{
    int j = size - 1;
    for (int i = 0; i < j; i++)
    {
        if (arr[i] + arr[j] == target)
        {
            printf("\n------------------------\n");
            printf("Sum target found");
            printf("\n------------------------\n");

            break;
        }
        else if (arr[i] + arr[j] > target)
        {
            j--;
        }
        else if (arr[i] + arr[j] < target)
        {
            i++;
        }
    }

    printf("Sum not found");
}

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 19;
    sum(arr, size, target);
    return 0;
}
