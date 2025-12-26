#include<stdio.h>

int Strlen(char *str)
{
    
    if (str[0]=='\0')

         return 0;
    else
        return 1+Strlen(str+1);
}
int main()
{
    int iRet=0;
    char arr[20];

    printf("enter string");
    scanf("%s",arr);
    iRet = Strlen(arr);
    printf("%d\n",iRet);
    return 0;
}