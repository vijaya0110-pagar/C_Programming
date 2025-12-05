#include <stdio.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckDigit(char ch)
{
    if(ch >= '0' && ch <= '9')
    {
        return TRUE;

    }
    else{
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character : ");
    scanf("%c", &cValue);

    bRet = CheckDigit(cValue);

    if (bRet == TRUE)
    {
        printf("It is a digit\n");
    }
    else
    {
        printf("It is not a digit\n");
    }
    return 0;
}