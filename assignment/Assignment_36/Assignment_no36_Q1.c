#include<stdio.h>

void strlwrx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;   
        }
        str++;
    }
}
int main()
{
    char Arr[20];
    printf("enter string :");
    scanf("%[^`\n`]s",Arr);
    strlwrx(Arr);
    printf("Modified string is %s",Arr);
    return 0;
}