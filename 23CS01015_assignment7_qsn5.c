#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    printf("Enter the string : ");
    scanf("%s", &str);
    char str2[1000];
    strcpy(str2, str);
    strrev(str);
    if (strcmp(str,str2) == 0)
    {
        printf("Given string is palindrome.\n");
    }
    else
        printf("Given string is not palindrome.\n");
    return 0;
}
