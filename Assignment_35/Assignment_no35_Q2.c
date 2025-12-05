#include<stdio.h>
int CountSmall(char *src)
{
    int iCnt=0;
    while(*src!='\0')
    {
        if(*src >= 'a' && *src <= 'z')
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
    iRet=CountSmall(Arr);
    printf("%d\n",iRet);
    return 0;
}