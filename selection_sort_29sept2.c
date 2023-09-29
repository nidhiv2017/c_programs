#include <stdio.h>
#include <limits.h>
int select(int *arr, int size)
{
    for (int j = 0; j < size - 1 ; j++)
    {

        int temp, min = INT_MAX, index = -1, i = 0;

        for (i = j; i < size; i++)
        {

            if (min > arr[i])
            {
                min = arr[i];
                index = i;
            }
        }
        temp = arr[j];
        arr[j] = arr[index];
        arr[index] = temp;
    }
}

void pr(int *arr, int size)
{
    printf("\n++++++++++++++++++++++++++\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n++++++++++++++++++++++++++\n");
}
int main(void)
{
    int arr[] = {5, 9, 1, 0, 8, -50, 20, 2, 7, 6, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    select(arr, size);
    pr(arr, size);
    return 0;
}
