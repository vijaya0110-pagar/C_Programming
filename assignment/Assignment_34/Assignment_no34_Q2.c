#include <stdio.h>

void Display(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
        printf("%c\n", ch);
    }

    else if (ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
        printf("%c\n", ch);
    }

    else
        printf("%c\n", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter Character : ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}