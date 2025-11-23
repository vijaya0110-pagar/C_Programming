#include<stdio.h>
void MultipleDisplay(int iNo)
{
    for(int i=1 ;i<=5;i++)
    {
        printf("%d\t",iNo*i);
    }
}
int main()
{
    int iValue=0;
    printf("enter number:");
    scanf("%d",&iValue);
    MultipleDisplay(iValue);
    return 0;
}