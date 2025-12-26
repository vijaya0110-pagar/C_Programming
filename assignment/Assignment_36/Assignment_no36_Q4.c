#include<stdio.h>

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 48 && *str <= 57 )
        {
            
            printf("%c",*str);    //as i learn from net to print the value of ascii use %c
        }
         str++;
    }
}
int main()
{
    char Arr[20];
    printf("enter string :");
    scanf("%[^`\n`]s",Arr);
    DisplayDigit(Arr);
    return 0;
}