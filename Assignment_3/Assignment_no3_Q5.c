#include<stdio.h>
#include<stdbool.h>
typedef int BOOL ;
# define TRUE 1;
# define FALSE 0;
BOOL ChkVowel(char cValue)
{
    if(cValue== 'A' || cValue== 'E'|| cValue== 'I' ||cValue== 'O' ||cValue== 'U' ||cValue== 'a' ||cValue== 'e' ||cValue== 'i' ||cValue== 'o' ||cValue== 'u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char cValue='\0';
    BOOL bRet=FALSE;
    printf("Enter charater:\n");
    scanf("%c",&cValue);
    bRet=ChkVowel(cValue);
    if(bRet ==1)
    {
        printf("It is vowel\n");
    }
    else
    {
        printf("It id consonant\n");
    }
    return 0;
}