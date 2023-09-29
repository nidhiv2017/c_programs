#include <stdio.h>
#include <limits.h>
void select(int *arr, int size)
{
    for (int j = 0; j < size - 1; j++)
    {
        int min = INT_MAX, index = -1, temp;

        for (int i = j; i < size; i++)
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
    for (int i = 0; i < size; i++)
    {
        printf("%d, ", arr[i]);
    }
}

int main(void)
{
    int arr[] = {7, 0, 3, 5, 10, -5, 1, 4, 9, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    select(arr, size);
    pr(arr, size);
    return 0;
}
