#include <stdio.h>
#include <string.h>
int main()
{
    char str1[1000];
    char str2[1000];
    printf("Enter the first string : ");
    gets(str1);
    printf("Enter the second string : ");
    gets(str2);
    char str3[strlen(str2) + 1];
    for (int i = 0; i < strlen(str1); i++)
    {
        if (str2[0] == str1[i])
        {
            for (int j = 0; j < strlen(str2); j++)
            {
                if (str2[j] == str1[i + j])
                {
                    str3[j] = str1[i + j];
                }
            }
            str3[strlen(str2)] = '\0';
        }
    }
    if (strcmp(str2, str3) == 0)
    {
        printf("The substring exists in the string.\n");
    }
    else
        printf("The substring doesn't exist in the string.\n");

    return 0;
}