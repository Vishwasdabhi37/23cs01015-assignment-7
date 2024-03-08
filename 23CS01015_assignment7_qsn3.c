#include <stdio.h>
#include <string.h>
void func(char arr[], int low, int high)
{
    if (low == high)
    {
        return;
    }
    int temp = arr[low];
    arr[low] = arr[high];
    arr[high] = temp;
    func(arr, low + 1, high - 1);
}
int main()
{
    char string[1000];
    printf("Enter a string : ");
    gets(string);
    func(string, 0, strlen(string) - 1);
    puts(string);
    return 0;
}