#include<stdio.h>
int CountCapital(char *src)
{
    int iCnt=0;
    while(*src!='\0')
    {
        if(*src >= 'A' && *src <= 'Z')
        {iCnt++;}
        src++;
    }
    return iCnt;
}
int main()
{
    char Arr[20];
    int iRet=0;
    printf("enter String :");
    scanf(" %[^'\n']",Arr);
    iRet=CountCapital(Arr);
    printf("%d\n",iRet);
    return 0;
}