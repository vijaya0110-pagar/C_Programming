#include<stdio.h>
void CheckEvenOdd(int iNo)
{
    if(iNo%2==0)
    {
        printf("EVEN!!");
    }
    else
    {
        printf("ODD!!");
    }
}
int main()
{
    int iValue=0;
    printf("enter number:");
    scanf("%d",&iValue);
    CheckEvenOdd(iValue);
    return 0;
}