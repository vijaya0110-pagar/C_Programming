#include<stdio.h>
void Display(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>=1)
    {
        printf("*");
        iNo--;
    }   
}
int main()
{
    int iValue=0;
    printf("enter number");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}