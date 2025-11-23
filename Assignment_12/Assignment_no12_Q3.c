#include<stdio.h>
int Sum_offall_factors(int number)
{
    int iCnt=0;
    int iSum=0;
    for(iCnt=1;iCnt<=number/2;iCnt++)
    {
        if(number%iCnt==0)
        {
            iSum=iSum+iCnt;
        }
    }
    return iSum;
}
int main()
{
    int iNum=0;
    printf("Enter number:");
    scanf("%d",&iNum);
    int iRet=Sum_offall_factors(iNum);
    printf("sum of all factors:%d",iRet);
    return 0;
}