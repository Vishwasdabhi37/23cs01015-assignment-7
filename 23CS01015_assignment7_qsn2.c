#include <stdio.h>
#include <string.h>
int main()
{
    char givenstr[10000];
    char printstr[10000];
    int var = 0;
    printf("Enter the string : ");
    gets(givenstr);
    for (int i = 0; i < strlen(givenstr); i++)
    {
        int check = givenstr[i];
        if ((check > 64 && check < 91) || (check > 96 && check < 123))
        {
            printstr[var] = givenstr[i];
            var++;
        }
    }
    printstr[var] = '\0';
    puts(printstr);
    return 0;
} 
