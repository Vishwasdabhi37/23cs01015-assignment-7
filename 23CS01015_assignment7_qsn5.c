#include <stdio.h>
int main()
{
    char str[1000];
    printf("Enter the string : ");
    scanf("%s", &str);
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            printf("Given string in not a palindrome\n");
            return 0;
        }
    }
    printf("Given string in a palindrome\n");

    return 0;
}
