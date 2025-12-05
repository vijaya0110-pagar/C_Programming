#include <stdio.h>

void Display(char ch)
{
    int iCnt = 0;

    char ch = '\0';
    
    printf("Dec\t|\tHex\t|\tOct\t|\tChar\t|\n");

    for(iCnt = 0,ch = '\0' ; iCnt <= 255; iCnt++,ch++)
    {
        printf("----------------------------------------------\n");
        printf("%d\t|\t%x\t|\t%o\t|\t%c\t|\n",iCnt,ch,ch,ch);
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