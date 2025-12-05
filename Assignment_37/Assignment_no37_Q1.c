#include<stdio.h>
#include<stdbool.h>
# define TRUE 1
#define FALSE 0
typedef bool BOOL;
BOOL ChkChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;  
        }
        str++;
    }
    return FALSE;   
}

int main()
{
    char Arr[50];
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter String: ");
    scanf(" %[^`\n`]s", Arr);

    printf("Enter Character to Search: ");
    scanf(" %c", &cValue);

    bRet = ChkChar(Arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character found");
    }
    else
    {
        printf("Character not found");
    }

    return 0;
}