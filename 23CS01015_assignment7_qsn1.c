#include <stdio.h>
#include <string.h>
int freq[26] = {0};
int main()
{
    char word[1000];
    printf("Enter the string : ");
    gets(word);
    for (int i = 0; i < strlen(word); i++)
    {
        int check = word[i];
        if (check > 64 && check < 96)
        {
            check -= 65;
        }
        else if (check > 96)
        {
            check -= 97;
        }
        freq[check]++;
    }
    char given_char;
    printf("Enter the charecter : ");
    scanf("%c", &given_char);
    int check2 = given_char;
    if (check2 > 64 && check2 < 96)
    {
        check2 -= 65;
    }
    else if (check2 > 96)
    {
        check2 -= 97;
    }
    printf("The frequency of %c is %d.", given_char, freq[check2]);
    return 0;
}