#include <stdio.h>

void ft_small_to_big(int *tab, int size)
{
    int swap;
    int i;

    i = 0;
    while (i < (size -1))
    {
        if (tab[i] > tab[ i + 1])
        {
            swap = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = swap;
            i = 0;
        }
        else{
            i++;
        }
    }

}

int main()
{
    int arr[] = {4, 2, 7, 1, 3, 56, 89, 13};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    ft_small_to_big(arr, size);

    printf("Array after sorting: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}