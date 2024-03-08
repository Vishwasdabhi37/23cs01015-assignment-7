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
    len--;
    int check = 1;
    for (int i = 0; i < (len / 2 + len % 2); i++)
    {
        if (str[i] != str[len - i])
        {
            check = 0;
        }
    }
    if (check)
    {
        printf("Given string is pelindrom.\n");
    }
    else
        printf("Given string is not pelindrom.\n");

    return 0;
}