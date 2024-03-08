#include <stdio.h>
#include <string.h>
int max(int a, int b)
{
    return a > b ? a : b;
}
int func(int arr[], int size)
{
    if (size == 1)
    {
        return arr[size];
    }

    return max(arr[size], func(arr, size - 1));
}
int main()
{
    int size;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The max element in the array is %d\n", func(arr, size-1));
    return 0;
}