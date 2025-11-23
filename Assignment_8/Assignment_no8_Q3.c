#include<stdio.h>
int Factorial(int iNo)
{
    int iFact=1;
    for(int icnt=1;icnt<=iNo;icnt++)
    {
        iFact=iFact*icnt;
    }
    return iFact;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("enter number");
    scanf("%d",&iValue);
    iRet = Factorial(iValue);
    printf("factoiral of number is %d",iRet);
    return 0;
    
}