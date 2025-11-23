// a to z = 97 to 122
// A to Z = 65 to 90
#include<stdio.h>
void DisplayConvert( char cValue)
{
    if((cValue>=65) && (cValue<=90))
    {
        cValue = cValue+32;
        printf("%c\n",cValue);
    }
    else if((cValue>=97 ) && (cValue<=122))
    {
        cValue=cValue-32;
        printf("%c\n",cValue);
    }
}
int main()
{
    char cValue='\0';
    printf("Enter charater:\n");
    scanf("%c",&cValue);
    DisplayConvert(cValue);
    return 0;
}