#include <stdio.h>
#include <stdbool.h>
void sort(int *arr, int size)
{
    for (int j = 0; j < size - 1; j++)
    {
        bool flag = true;
        int temp;
        for (int i = 0; i < size - 1 - j; i++)
        {
            if (arr[i] < arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                flag = false;
            }
            flag = true;
        }
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
    sort(arr, size);
    pr(arr, size);

    return 0;
}
