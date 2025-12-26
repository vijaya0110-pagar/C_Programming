#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef bool BOOL;
#define TRUE 1     
#define FALSE 0

BOOL ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || 
           (*str == 'o') || (*str == 'u') ||
           (*str == 'A') || (*str == 'E') || (*str == 'I') ||
           (*str == 'O') || (*str == 'U'))
        {
            return TRUE;  
        }
        str++;
    }
    return FALSE;  
}

int main()
{
    char Arr[20];
    BOOL bRet = FALSE;

    printf("Enter String: ");
    scanf(" %[^\n]", Arr);   

    bRet = ChkVowel(Arr);

    if(bRet == TRUE)
    {
        printf("contains Vowel\n");
    }
    else
    {
        printf("There is no Vowel\n");
    }

    return 0;
}