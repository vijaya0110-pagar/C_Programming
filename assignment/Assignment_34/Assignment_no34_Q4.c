#include <stdio.h>

void Display(char ch)
{
    int iCnt = 0;

    if ((ch >= '!' && ch <= '/') || (ch >= ':' && ch <= '@')||(ch >= '[' && ch <= '`')||(ch >= '{' && ch <= '~'))
    {
        printf("%c\t", ch);
        printf("\n");
    }
    
    else
    {
        printf("%c\n", ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter Character : ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}