#include<stdio.h>

int CountWhite(char *str)
{
    int icnt=0;
    while(*str != '\0')
    {
        if(*str == 32)
        {
            
           icnt++;   
        }
         str++;
    }
    return icnt;
}
int main()
{
    char Arr[20];
    int iRet=0;
    printf("enter string :");
    scanf("%[^`\n`]s",Arr);
    iRet=CountWhite(Arr);
    printf("%d\n",iRet);
    return 0;
}