#include<stdio.h>
int Difference(char *src)
{
    int iCnt1=0;
    int iCnt2=0;
    while(*src!='\0')
    {
        if(*src >= 'a' && *src <= 'z')
        {iCnt1++;}
        if(*src >= 'A' && *src <= 'Z')
        {iCnt2++;}
        src++;
    }
    return iCnt1-iCnt2;
}
int main()
{
    char Arr[20];
    int iRet=0;
    printf("enter String :");
    scanf(" %[^'\n']",Arr);
    iRet=Difference(Arr);
    printf("%d\n",iRet);
    return 0;
}