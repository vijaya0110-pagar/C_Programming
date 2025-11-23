#include<stdio.h>
void CheckLeapYear(int year)
{
    if((year%4==0 && year%100 != 0) || (year % 400 ==0))
    {
        printf("%d is a leap year.\n",year);
    }
    else
    {
        printf("%d is not a leap year.\n",year);
    }
}
int main()
{
    int iYear=0;
    printf("Enter year:");
    scanf("%d",&iYear);
    CheckLeapYear(iYear);
    return 0;
}